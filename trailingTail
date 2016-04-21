void setup()
{
	// RGB 1 (anodes)
	pinMode(11, OUTPUT); // red 1
	pinMode(10, OUTPUT); // grn 1
	pinMode(9, OUTPUT);  // blu 1

	// RGB 2 (anodes)
	pinMode(6, OUTPUT);  // red 2
	pinMode(5, OUTPUT);  // grn 2
	pinMode(3, OUTPUT);  // blu 2

	// grounds (cathodes)
	pinMode(7, OUTPUT);  // GND A
	pinMode(4, OUTPUT);  // GND B
	pinMode(2, OUTPUT);  // GND C
 
	off(); // start with all pins off
}

int periodTime = 100;
int delayTime = 5;

void loop()
{
	// array to hold red green and blue color values
	unsigned int color[3];
	color[0] = 255;
	color[1] = 0;
	color[2] = 0;

	// for loop to iterate through the color spectrum
	for (int decColor = 0; decColor < 3; decColor += 1) {
		int incColor = decColor == 2 ? 0 : decColor + 1;

		for (int i = 0; i < 255; i += 15) {

			// this is to ensure we still get red (255, 0, 0)
			if (i != 0) {
				color[decColor] -= 15;
				color[incColor] += 15;
			}
			light1(color[0], color[1], color[2]);
			light2(color[0], color[1], color[2]);
			light3(color[0], color[1], color[2]);
			light4(color[0], color[1], color[2]);
			light5(color[0], color[1], color[2]);
			light6(color[0], color[1], color[2]);
		}
	}
}

// turns LED1 on at 100%
void light1(int red, int green, int blue) {
	// LED1 = GND A (pin7) + RGB 1 (pin 11, pin 10, pin 9)
	digitalWrite(7, LOW);
	analogWrite(11, red);
	analogWrite(10, green);
	analogWrite(9, blue);
	delay(periodTime);

	// turn LED1 off
	digitalWrite(7, HIGH);
	analogWrite(11, 0);
	analogWrite(10, 0);
	analogWrite(9, 0);
}

// turns LED2 on @ 100% and LED1 on @ 39%
void light2(int red, int green, int blue) {
	for (int i = 0; i < periodTime / (delayTime * 2); i++) {
		// LED2 = GND B (pin 4) + RGB 1 (pin 11, pin 10, pin 9)
		digitalWrite(4, LOW);
		analogWrite(11, red);
		analogWrite(10, green);
		analogWrite(9, blue);
		delay(delayTime);

		// turn GND B off and GND A on to switch from LED 2 to LED 1
		digitalWrite(4, HIGH);
		digitalWrite(7, LOW);

		// cut RGB 1 power to 39%
		analogWrite(11, red / 2.55);
		analogWrite(10, green / 2.55);
		analogWrite(9, blue / 2.55);

		delay(delayTime);
		digitalWrite(7, HIGH); // turn off GND A
	}
	// turn off RGB 1
	analogWrite(11, 0);
	analogWrite(10, 0);
	analogWrite(9, 0);
}

// turns LED3 on @ 100% , LED2 on @ 39%, and LED1 on @ 4%
void light3(int red, int green, int blue) {
	for (int i = 0; i < periodTime / (delayTime * 3); i++) {
		// LED3 = GND C (pin 2) + RGB 1 (pin 11, pin 10, pin 9)
		digitalWrite(2, LOW);
		analogWrite(11, red);
		analogWrite(10, green);
		analogWrite(9, blue);
		delay(delayTime);

		// turn GND C (pin 2) off and GND B (pin 4) on to switch from LED3 to LED2
		digitalWrite(2, HIGH);
		digitalWrite(4, LOW);

		// cut power on RGB 1 to 39%
		analogWrite(11, red / 2.55);
		analogWrite(10, green / 2.55);
		analogWrite(9, blue / 2.55);
		delay(delayTime);
		
		// turn GND B (pin 4) off and GND A (pin 7) on to switch from LED2 to LED1
		digitalWrite(4, HIGH);
		digitalWrite(7, LOW);

		// cut power on RGB 1 to 4%
		analogWrite(11, red / 25.5);
		analogWrite(10, green / 25.5);
		analogWrite(9, blue / 25.5);
		delay(delayTime);

		digitalWrite(7, HIGH); // turn GND A off
	}
	// turn RGB 1 off
	analogWrite(11, 0);
	analogWrite(10, 0);
	analogWrite(9, 0);
}

// turns LED4 on @ 100% , LED3 on @ 39%, and LED2 on @ 4%
void light4(int red, int green, int blue) {
	for (int i = 0; i < periodTime / (delayTime * 3); i++) {
		// LED4 = GND A (pin 7) + RGB 2 (pin 6, pin 5, pin 3)
		digitalWrite(7, LOW);
		analogWrite(6, red);
		analogWrite(5, green);
		analogWrite(3, blue);
		delay(delayTime);

		// turn LED4 off
		analogWrite(6, 0);
		analogWrite(5, 0);
		analogWrite(3, 0);
		digitalWrite(7, HIGH);

		// LED3 = GND C (pin 2) + RGB 1 (pin 11, pin 10, pin 9)
		// turn on RGB 1 @ 39%
		digitalWrite(2, LOW);
		analogWrite(11, red / 2.55);
		analogWrite(10, green / 2.55);
		analogWrite(9, blue / 2.55);
		delay(delayTime);

		// turn GND C (pin 2) off and GND B (pin 4) on to switch from LED3 to LED2
		digitalWrite(2, HIGH);
		digitalWrite(4, LOW);

		// cut RGB 1 to 4%
		analogWrite(11, red / 25.5);
		analogWrite(10, green / 25.5);
		analogWrite(9, blue / 25.5);
		delay(delayTime);

		// turn off LED3
		digitalWrite(4, HIGH);
		analogWrite(11, 0);
		analogWrite(10, 0);
		analogWrite(9, 0);
	}
}

// turns LED5 on @ 100% , LED4 on @ 39%, and LED3 on @ 4%
void light5(int red, int green, int blue) {
	for (int i = 0; i < periodTime / (delayTime * 3); i++) {
		// LED5 = GND B (pin 4) + RGB 2 (pin 6, pin 5, pin 3)
		digitalWrite(4, LOW);
		analogWrite(6, red);
		analogWrite(5, green);
		analogWrite(3, blue);
		delay(delayTime);

		// turn GND B (pin 4) off and GND A (pin 7) on to change from LED 5 to LED 4
		digitalWrite(4, HIGH);
		digitalWrite(7, LOW);

		// cut LED 4 to 39%
		analogWrite(6, red / 2.55);
		analogWrite(5, green / 2.55);
		analogWrite(3, blue / 2.55);
		delay(delayTime);

		// turn off LED4 (GND A + RGB 2)
		digitalWrite(7, HIGH);
		analogWrite(6, 0);
		analogWrite(5, 0);
		analogWrite(3, 0);

		// LED3 = GND C (pin 2) + RGB 1 (pin 11, pin 10, pin 9)
		// RGB 1 @ 4%
		digitalWrite(2, LOW);
		analogWrite(11, red / 25.5);
		analogWrite(10, green / 25.5);
		analogWrite(9, blue / 25.5);
		delay(delayTime);

		// turn off LED 3
		digitalWrite(2, HIGH);
		analogWrite(11, 0);
		analogWrite(10, 0);
		analogWrite(9, 0);
	}
}

// turns LED6 on @ 100% , LED5 on @ 39%, and LED4 on @ 4%
void light6(int red, int green, int blue) {
	for (int i = 0; i < periodTime / (delayTime * 3); i++) {
		// LED6 = GND C (pin 2) + RGB 2 (pin 6, pin 5, pin 3)
		digitalWrite(2, LOW);
		analogWrite(6, red);
		analogWrite(5, green);
		analogWrite(3, blue);
		delay(delayTime);

		// turn GND C (pin 2) off and GND B (pin 4) on to switch from LED 6 to LED 5
		digitalWrite(2, HIGH);
		digitalWrite(4, LOW);

		// cut RGB 2 to 39%
		analogWrite(6, red / 2.55);
		analogWrite(5, green / 2.55);
		analogWrite(3, blue / 2.55);
		delay(delayTime);

		// turn GND B (pin 4) off and GND A (pin 7) on to switch from LED 5 to LED 4
		digitalWrite(4, HIGH);
		digitalWrite(7, LOW);

		// cut RGB 2 to 4%
		analogWrite(6, red / 25.5);
		analogWrite(5, green / 25.5);
		analogWrite(3, blue / 25.5);
		delay(delayTime);

		digitalWrite(7, HIGH); // turn off GND A
	}
	// turn off RGB2
	analogWrite(6, 0);
	analogWrite(5, 0);
	analogWrite(3, 0);
}

void off() {
	// set groups to low
	digitalWrite(11, LOW);
	digitalWrite(10, LOW);
	digitalWrite(9, LOW);
	digitalWrite(6, LOW);
	digitalWrite(5, LOW);
	digitalWrite(3, LOW);

	// set grounds to high
	digitalWrite(7, HIGH);
	digitalWrite(4, HIGH);
	digitalWrite(2, HIGH);
}
