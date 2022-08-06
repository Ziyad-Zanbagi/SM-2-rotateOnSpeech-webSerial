
#include <Servo.h>
#include <SPI.h>

Servo myservo; // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0; // variable to store the servo position

void setup()
{
  myservo.attach(9); // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
}

void loop()
{

  if (Serial.available() > 0)
  {
    // read the incoming byte:
    // say what you got:
    // Serial.print("I received: ");
    // Serial.println(incomingByte, DEC);
    data = Serial.readString();
    Serial.print(data);
    if (data == 'R')
    {
      for (pos = 0; pos <= 180; pos += 1)
      { // goes from 0 degrees to 180 degrees
        // in steps of 1 degree
        myservo.write(pos); // tell servo to go to position in variable 'pos'
        delay(15);          // waits 15 ms for the servo to reach the position
      }
    }
    else if (data == 'L')
    {
      for (pos = 180; pos >= 0; pos -= 1)
      {                     // goes from 180 degrees to 0 degrees
        myservo.write(pos); // tell servo to go to position in variable 'pos'
        delay(15);          // waits 15 ms for the servo to reach the position
      }
    }
  }
}
