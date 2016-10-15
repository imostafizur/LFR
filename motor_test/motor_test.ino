
#define rightMotorF 7
#define rightMotorB 8
#define rightMotorPWM 9
#define leftMotorF 4
#define leftMotorB 5
#define leftMotorPWM 3
#define stby 6


void setup() {
pinMode(rightMotorF, OUTPUT);
  pinMode(rightMotorB, OUTPUT);
  pinMode(rightMotorPWM, OUTPUT);
  pinMode(leftMotorF, OUTPUT);
  pinMode(leftMotorB, OUTPUT);
  pinMode(leftMotorPWM, OUTPUT);
  pinMode(stby,OUTPUT);
  
}

void loop() {
  //motor motion
  digitalWrite(rightMotorF, HIGH);
  digitalWrite(rightMotorB, LOW);
  analogWrite(rightMotorPWM,100);

  
   digitalWrite(leftMotorF, HIGH);
  digitalWrite(leftMotorB, LOW);
  analogWrite(leftMotorPWM, 100);
  digitalWrite(stby,HIGH);
  

}
