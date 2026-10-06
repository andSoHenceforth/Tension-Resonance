/* * MyoWare 2.0 to TouchDesigner
 * Reads Envelope (ENV) signal and sends to Serial
 */

const int musclePin = A0; // Connect MyoWare ENV to A0
int sensorValue = 0;

void setup() {
  // Use a high baud rate for smooth visuals
  Serial.begin(115200); 
}

void loop() {
  // Read the muscle sensor (0 - 1023)
  sensorValue = analogRead(musclePin);

  // Print the value followed by a newline for TouchDesigner to parse
  Serial.println(sensorValue);

  // Small delay for stability (approx 60fps)
  delay(16); 
}