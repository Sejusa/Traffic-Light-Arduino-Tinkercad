Madeby Sejusa
// Arduino code
// Traffic_Light Arduino & Tinkercad // define the pins with the corresponding buttons


#define westButton 3 
#define eastButton 13 
#define westRed 2
 #define westYellow 1 
#define westGreen 0 
#define eastRed 12 
#define eastYellow 11 
#define eastGreen 10 
#define yellowBlinkTime 500 // 0.5 seconds for the flashing of the yellow light
boolean trafficWest = true; // oest = true, est = false 
int flowTime = 10000; // Amount of time to control traffic
int changeDelay = 2000; // Amount of time between color changes


void setup() { // Initialization of digital inputs and outputs pins
pinMode(westButton, INPUT); 
pinMode(eastButton, INPUT); 
pinMode(westRed, OUTPUT); 
pinMode(westYellow, OUTPUT); 
pinMode(westGreen, OUTPUT); 
pinMode(eastRed, OUTPUT); 
pinMode(eastYellow, OUTPUT); 
pinMode(eastGreen, OUTPUT); //Initial state lights - the west side is green first
digitalWrite(westRed, LOW); 
digitalWrite(westYellow, LOW); 
digitalWrite(westGreen, HIGH); 
digitalWrite(eastRed, HIGH); 
digitalWrite(eastYellow, LOW); 
digitalWrite(eastGreen, LOW); 
} 
void loop() 
{
  if (trafficWest) //if the traffic is going west
  {
    if (digitalRead(eastButton) == HIGH) //if a vehicle is detected at the east traffic light
    {
      trafficWest = false; //let's say the traffic is no longer going west.
      digitalWrite(westGreen, LOW);
      delay(changeDelay);
      digitalWrite(westYellow, HIGH);
      delay(changeDelay);
      digitalWrite(westYellow, LOW);
      delay(changeDelay);
      digitalWrite(westRed, HIGH);
      delay(flowTime);
      digitalWrite(eastRed, LOW); //turn off the red led of the east traffic light.
      for (int i=0; i<=3; i++) //the yellow light on the east traffic light comes on and flashes warning the driver to get ready.
      {
        digitalWrite(eastYellow, HIGH);
        delay(yellowBlinkTime);
        digitalWrite(eastYellow, LOW);
        delay(yellowBlinkTime);
      }
      delay(changeDelay);
      digitalWrite(eastGreen, HIGH);
    }
  }
  else
    {
      if (digitalRead(westButton) == HIGH)
      {
        trafficWest = true; //let's say the traffic is already going west.
        digitalWrite(eastGreen, LOW);
        delay(changeDelay);
        digitalWrite(eastYellow, HIGH);
        delay(changeDelay);
        digitalWrite(eastYellow, LOW);
        delay(changeDelay);
        digitalWrite(eastRed, HIGH);
        delay(flowTime);
        digitalWrite(westRed, LOW); //turn off the red led of the west traffic light.
        for (int x=0; x<=3; x++) //the yellow light on the east traffic light comes on and flashes warning the driver to get ready.
        {
          digitalWrite(westYellow, HIGH);
          delay(yellowBlinkTime);
          digitalWrite(westYellow, LOW);
          delay(yellowBlinkTime);
        }
        delay(changeDelay);
        digitalWrite(westGreen, HIGH);
      }
    }
}
