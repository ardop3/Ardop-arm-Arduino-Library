#include <VarSpeedServo.h>
VarSpeedServo shoulder1;
VarSpeedServo shoulder2;
VarSpeedServo elbow;
VarSpeedServo wrist;
VarSpeedServo endeffector;

/////////
int speed_shoulder1=80;
int speed_shoulder2=80;

int speed_elbow=80;

int speed_wrist=80;

int speed_endeffector=80;

//////////////
int angle_shoulder1=12;
int angle_shoulder2=12;

int angle_elbow=12;

int angle_wrist=12;

int angle_endeffector=12;
//////////


void setup() {
  // put your setup code here, to run once:
shoulder1.attach(3);
shoulder2.attach(4);

elbow.attach(5);

wrist.attach(6);
endeffector.attach(7);

}

void loop() {
  // put your main code here, to run repeatedly:


}
