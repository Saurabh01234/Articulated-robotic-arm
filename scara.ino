 

 






float L1;
float L2;
 float X;
float Y, theta1, theta2;

void setup() {

Serial.begin (9600) ;

Serial.println (" Enter X ");
while (Serial.available()==0) {}
X=Serial.parseFloat ();
Serial.println(X);

Serial.println ("Enter the length of first arm: ");
while (Serial.available()==0) {}
L1=Serial.parseFloat ();
Serial.println(L1);

Serial.println (" Enter Y ");
while (Serial.available()==0) {}
Y=Serial.parseFloat ();
Serial.println(Y);

Serial.println("Enter the length of second arm: ");
while(Serial.available ()==0) {}
L2=Serial.parseFloat();
Serial.println(L2);




Serial.println("Forward Kinematics");
}

void loop() {
if (Serial.available()==0) {
float theta1;

float theta2;

float angle1 ;

float angle2 ;

float rad_angle1;

float rad_angle2;

float x;

float y;

float l1=17;
float l2=17;

 //float X=24;
  //float Y =24;



Serial.println("Enter the angle2 in degree: ");
while(Serial.available ()==0) {}
angle2=Serial.parseFloat ();
Serial.println(angle2);


theta2 = acos((sq(X) + sq(Y) - sq(l1) - sq(l2)) / (2 * l1 * l2));
  if (X < 0 & X < 0) {
    theta2 = (-1) * theta2;
  }
  theta1 = atan(X / Y) - atan((L2 * sin(theta2)) / (l1 + l2 * cos(theta2)));
  
Serial.println(theta1);
Serial.println(theta2);



}
}
 

