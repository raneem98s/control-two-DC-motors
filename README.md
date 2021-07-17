# two-motors

The L293D is a dual-channel H-Bridge motor driver capable of driving a pair of DC motors or
one stepper motor .That means it can individually drive up to two motors
The L293D IC is a modular motor IC that allows a DC motor to drive in any direction. Controls
the direction of rotation (clockwise and counterclockwise). This IC consists of 16 pins used
for instantaneous control of a group of two DC motors in any direction. This means that
using the L293D IC, Arduino and battery we can control two DC motors as shown in this
circuit and this code.

 # circuit
 
![Daring Bombul (1)](https://user-images.githubusercontent.com/86836634/126050606-2dfb4a1d-38fa-461e-b382-706e2fe111a6.png)

https://www.tinkercad.com/things/2PfoMstKQiS-daring-bombul/editel?sharecode=uGt0pJBeJ38rdO0GgMxDz2bST_-zH2y_WkhezcgeIGE

# code

// Left motor pins
const int LEFT_MOTOR_1 =10;

const int LEFT_MOTOR_2 =11;

// Right motor pins

const int RIGHT_MOTOR_1 =6;

const int RIGHT_MOTOR_2 =9;

void setup()
{
  //set all the motor pins to OUTPUT
  
  pinMode(LEFT_MOTOR_1,OUTPUT);
  
  pinMode(LEFT_MOTOR_2, OUTPUT);
  
  pinMode(RIGHT_MOTOR_1, OUTPUT);
  
  pinMode(RIGHT_MOTOR_2,OUTPUT);
  
  //initialize the serial
  Serial.begin(9600);
}

void loop()
{
  //set the speed of both mottors to 100 (it can go from 0-255)
  analogWrite(3, 100);
  
  analogWrite(5, 100); 
  
  //turn left motor on
  
  digitalWrite(LEFT_MOTOR_1,HIGH);
  
  digitalWrite(LEFT_MOTOR_2,LOW);
  
  //turn right motor on
  
  digitalWrite(RIGHT_MOTOR_1,LOW);
  
  digitalWrite(RIGHT_MOTOR_2,HIGH);
  
}
