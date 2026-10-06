# Tension-Resonance
A Projection-Based Art Therapy Experience for Chronic Musculoskeletal Pain

This project came to fruition by the event [EUGLOH: Innovation Days - Immersive technologies bridging art therapy and mental health](https://www.eugloh.eu/courses-trainings/activities/innovation-days-immersive-technologies-bridging-art-therapy-and-mental-health/). Students enrolled in this course would learn on how art therapy can benefit those with mental health problems, in learning the various techniques of art therapy. The students would then be working in teams to work on a project, both remotely and in-person at University Paris-Saclay in Paris, France, to create a projection-based experience that aims to address a mental health problem of the teams' choice and at the supervisor's discretion.

Four students from various disciplines and European universities collaborated to design and create a projection-based experience for those suffering from chronic pain. This was done through a program called TouchDesigner and one of its well known plug-ins called MediaPipe so that the user's movements in their hands or bodies can be detected through the camera. Not only that, but muscle activations (more specifically EMG biofeedback) were also captured via integration of an Arduino microcontroller. The reason for capturing the movements is to provide the user with a sense of control over their bodies, and that they may be able to feel a bit more at ease as a result.

<div align = "center">
  <img src="https://github.com/user-attachments/assets/24f23770-d2c5-4858-8ece-768a73ece046" width="23%" alt="image 1" />
  <img src="https://github.com/user-attachments/assets/f030dd54-261d-49ec-b637-5610b86a925a" width="30%" alt="image 2" />
  <img src="https://github.com/user-attachments/assets/d71a8cdf-a106-4e39-858f-499f6498494d" width="30%" alt="image 3" />
</div>

See my [LinkedIn post](https://lnkd.in/p/g7G4DuDq) for more details or photos!

Future applications include potentially using Unity alongside TouchDesigner to create a richer, more immerse experience.

---------------------
## Setup
What you require to try this out:
- Working camera (either front-facing or external)
- TouchDesigner program

I recommend using an external monitor or even better, a projector for a more *cinematic* experience. Absolute cinema.

To try this out, first install [TouchDesigner](https://derivative.ca/download) and then download the .toe file. Then load up said file in TouchDesigner.

Ensure that the animations are moving by either pressing the 'Play' button on the bottom tab or simply pressing Spacebar.

Now navigate your way to the right hand side of the workspace where you'll find the 'window5' operator. Please click the operator itself to open the properties, click on the 'Open/Close' tab, and then next to 'Open as Separate Window', simply click Open and the final view will be shown on a separate window. You can extend your screens such that on your main screen you will have TouchDesigner workspace open while on the projected screen, you will have the separate window.
<img width="2832" height="1714" alt="Screenshot 2026-10-06 105948" src="https://github.com/user-attachments/assets/ce24555e-2e30-41d5-9589-b69af7f660bc" />

In this project, we designed 4 different experiences for the user. To toggle between these experiences, click on the 'switch1' operator that is the second operator to the left of the 'window5' operator. 
<img width="2850" height="1732" alt="Screenshot 2026-10-06 105926" src="https://github.com/user-attachments/assets/a5ef84df-a3c0-4705-bdac-4966486fd06f" />
Here, you can move the index between 0-3 to select your desired experience.

### First experience (Index 0): Still but zooming painting
<img width="1260" height="710" alt="Screenshot 2026-10-06 105843" src="https://github.com/user-attachments/assets/698cc71c-0e02-4aab-92d3-5d7f6e1d2ab0" />
Here, the painting will simply zoom in and out for the user to admire and initially become calm. Here, a soothing voice will also be playing in the background, softly telling you to focus on the screen.
<img width="470" height="798" alt="image" src="https://github.com/user-attachments/assets/63b1218c-7a54-4446-bcdf-278e9e535451" />

### Second experience (Index 1): Body in the water
<img width="1264" height="708" alt="Screenshot 2026-10-06 105806" src="https://github.com/user-attachments/assets/eeb11b35-19d5-4346-9833-5eac149c6fb6" />
The camera will pick up the body movements. These movements affect the waters around the body, providing the user with a sense of control over their body whilst feeling immersed in the calmness of the water.


### Third experience (Index 2): Follow the bear!
<img width="1264" height="710" alt="Screenshot 2026-10-06 105826" src="https://github.com/user-attachments/assets/9797efe5-98b5-4c46-9313-126d72662921" />
This is a weird but fun one. Simply follow the exercises of the bear! The camera will detect and illustrate the full (stick-figure) body of the user so that the user can know that they are following along with the friendly bear.

### Fourth experience (Index 3): EMG Biofeedback in the water
<img width="1264" height="712" alt="Screenshot 2026-10-06 105856" src="https://github.com/user-attachments/assets/6cfa832c-0010-4b09-a807-27092f7086b2" />
For this one specifically you will need:
- Arduino microcontroller: I used [Arduino Uno R3](https://docs.arduino.cc/hardware/uno-rev3). Also you need a USB-A to USB-B cable to connect Arduino and computer. 
- An Arduino-powered sensor. I used [Myoware 2.0 Muscle Sensor](https://myoware.com/products/muscle-sensor/).
- Three wires to connect pins.

#### Pin setup. 
You need 3 wires for the following pins on the Arduino.
The left side indicates the pins on the Arduino-powered sensor while the right side indicates the pins on the Arduino iself. To keep it properly in place, feel free to solder it.
- ENV -> A0 (for muscle sensor readings)
- GND -> GND
- VIN -> 5V 

Then download the Arduino file `muscle.ino`. Ensure, with the Arduino and pins setup, that the code compiles correctly. Ensure that the port is set to COM5 (as it needs to be the same port as configured in the TouchDesigner file itself which is currently COM5, however you may change the port to your liking). Then after sticking the adhesives on the sensor, place the sensor on either your forearm or your shoulder, or really just any part of your body that feels some sort of tension. Now ensure that after running the code, you can see some numbers in the terminal that can change as you move, relax or tense in the part of the body where the sensor is on. 

As TouchDesigner is playing, part of the water will zoom in or out based on the movements of the muscle. Thus, the user can explore that part of their body and realise their way of relaxing.
