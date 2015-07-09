#include <Servo.h>
Servo myservo;

int index;
void setup() {
	Serial.begin (9600);
	myservo.attach (9);
	// We attack the servant to pin 9
}

void loop() {
	index = analogRead (A0);
	Serial.print (“original value”);
	Serial.println (index);
	index = map (index, 90, 10, 0, 179);
	myservo.write (index);
	Serial.print (“scaled value:”);
	Serial.println (index);
	// We print the original value of the sensor and then modified by the map command
	delay (150);
}






#include <Servo.h>
Servo myservo_pollice;
Servo myservo_indice;
Servo myservo_medio;
Servo myservo_anulare;
Servo myservo_mignolo;
int inch;
int index;
int average;
int ring;
int little finger;

void setup () {
	Serial.begin (9600);
	myservo_pollice.attach (9);
	myservo_indice.attach (10);
	myservo_medio.attach (11);
	myservo_anulare.attach (12);
	myservo_mignolo.attach (13);
}

void loop () {
	analogRead inch = (A0);
	index = analogRead (A1);
	average = analogRead (A2);
	annular analogRead = (A3);
	pinky = analogRead (A4);
	Serial.println (little finger);
	inch = map (inch, 20, 40, 0, 179);
	index = map (index, 20, 40, 0, 179);
	average = map (average, 20, 40, 0, 179);
	ring = map (ring, 20, 40, 0, 179);
	myservo_pollice.write (thumb);
	myservo_indice.write (index);
	myservo_medio.write (average);
	myservo_anulare.write (road);
	myservo_mignolo.write (little finger);
	delay (150);
}



