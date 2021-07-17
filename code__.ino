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
