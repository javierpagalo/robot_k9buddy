
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// Servo Declaration
Adafruit_PWMServoDriver servo = Adafruit_PWMServoDriver(0x40);

//#define SERVOMIN  150 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX  650 // this is the 'maximum' pulse length count (out of 4096)
#define SERVOMIN  245 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  491
void setServo(uint8_t n_servo, int angulo) {
  int duty;
  duty=map(angulo,0,180,SERVOMIN, SERVOMAX);
  servo.setPWM(n_servo, 0, duty);  
}

void setup()
 { // put your setup code here, to run once:
  //**Servo setting
  
  servo.begin();
  servo.setPWMFreq(60); // Analog servos run at ~60 Hz updates
 
 }

void loop()
 { // put your main code here, to run repeatedly:
  //servo.setPWM(2, 0, 245); 
  //delay(2000);
  setServo(2,0);
  delay(2000);
  setServo(3,30);
  delay(2000);
  setServo(4,60);
  delay(2000);
  setServo(5,90);
  delay(2000);
  setServo(6,120);
  delay(2000);
  setServo(7,150);
  delay(2000);
  setServo(8,180);
  delay(2000);
  
 }
