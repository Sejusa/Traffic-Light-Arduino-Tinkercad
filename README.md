# Traffic-Light-Arduino-Tinkercad
Build a traffic light with Arduino
Imagine you have a problem with a single lane bridge crossing a river. Every week, one or two accidents occur at night, when tired drivers drive across the bridge without first stopping to see if the road is clear. You suggested installing traffic lights but the mayor wants to see the project demonstrated before signing the purchase. You could rent temporary lights, but they are expensive. Instead, you have decided to build a model of the bridge with traffic using LEDs and an Arduino to control lights that simulate a traffic light.


Our goal is to install three-color traffic lights at each end of the bridge's single lane. The lights allow traffic to flow in only one direction at a time. When the sensors located at either end of the bridge detect a car it will make it wait using a red light. The lights will change and allow traffic to flow in the opposite direction.
The Algorithm
We will use two buttons to simulate the vehicle sensors at each end of the bridge. Each set of lights will have red, yellow and green LEDs. Initially, the system will allow traffic to flow from west to east, so westbound lights will turn green and eastbound lights will turn red. When a vehicle approaches the bridge and will end up pressing the button the light is red, then the system will turn the light on the opposite side from green to yellow to red, and then have a set period of time to allow any vehicle that is already on the bridge can finish the crossing. Next, the yellow light on the side of the waiting vehicle will flash as a "get ready" warning to the driver and finally the light will change to green. The light will remain green until the car approaches the other side, at which point the process repeats.
List of components


Here's what you'll need to create this project:
Two red LEDs (LED1 and LED2)
Two yellow LEDs (LED3 and LED4)
Two green LEDs (LED5 and LED6)
Six 560 Ω resistors (R1 to R6)
Two 10 kΩ resistors (R7 and R8)
Two 100 nF capacitors (C1 and C2)
Two buttons (S1 and S2)
A medium sized measuring plate
An Arduino and a USB cable Several connection cables
