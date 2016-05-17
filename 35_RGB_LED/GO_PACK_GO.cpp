/* ************************************************
-------------- 8 BIT PIN OUT KEY -----------------

[ X  G2 G1 R5 R4 R3 R2 R1 ]
[ X  B4 B3 B2 B1 G5 G4 G3 ]
[ D1 D2 D3 D4 D5 D6 D7 B5 ]


--- TURN EVERYTHING OFF ---
[ 0 0 0 0 0 0 0 0 ]
[ 0 0 0 0 0 0 0 0 ]
[ 1 1 1 1 1 1 1 0 ]

************************************************ */



int dataPin = 2;
int latchPin = 3;
int clockPin = 4;
int delayTime = 2;
int moveDelay = 250;

void setup() {
	//set pins to output so you can control the shift register
	pinMode(latchPin, OUTPUT);
	pinMode(clockPin, OUTPUT);
	pinMode(dataPin, OUTPUT);
}

void loop() {
		// g1
			digitalWrite(latchPin, LOW); //  v shift out the bits:
			shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
			shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
			shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
			digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
			delay(moveDelay);		// pause before next value:

		// g2
			for (int i = 0; i < moveDelay / (delayTime * 2); i++) {
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

		// g3
			for (int i = 0; i < moveDelay / (delayTime * 3); i++) {
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

		// g4
			for (int i = 0; i < moveDelay / (delayTime * 4); i++) {
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

		// g5
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10110010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

		// g6
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10110010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

		// o1
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10110010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				// o1
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// o2
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10110010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				// o1
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

		// o3
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10110010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

					// o1
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// o4
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

										// o1
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// o5
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				// o1
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// o6
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// o7
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
			}

			// o8
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
			}

			// p1
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// p2
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// p3
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// p4
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// p5
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10011110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// p6
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10011110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// a1
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10011110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				//a1
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// a2
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10011110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

										//a1
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// a3
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10011110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

										//a1
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// a4
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

										//a1
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// a5
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// a6
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// c1
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// c2
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}


			// c3
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// c4
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b0000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// c5
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b0000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value
				
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10111010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// c6
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10111010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b1111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// k1
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10111010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b1111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// k2
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10111010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b1111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// k3
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10111010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b1111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11010110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// k4
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b1111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11010110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10111010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// k5
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11010110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10111010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// k6
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11101110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11010110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10111010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// k7
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11010110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10111010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
				delay(delayTime);
			}

			// k8
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10111010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
				delay(delayTime);
				delay(delayTime);
			}

			

			// g1
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
				delay(delayTime);
				delay(delayTime);
	
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// g2
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
				delay(delayTime);
				delay(delayTime);

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// g3
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// g4
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// g5
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10111010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// g6
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10110010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// o1
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10110010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

										// o1
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// o2
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01110100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10110010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

										// o1
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// o3
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10110010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

										// o1
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// o4
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

										// o1
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// o5
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				// o1
				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000100);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// o6
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000010);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
			}

			// o7
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000001);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
			}

			// o8
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01111100);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b01000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
			}

			// o9
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00100000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b10000010);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:

				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
			}

			// o10
			for (int i = 0; i < moveDelay / (delayTime * 5); i++) {


				digitalWrite(latchPin, LOW); //  v shift out the bits:
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b00000000);
				shiftOut(dataPin, clockPin, LSBFIRST, 0b11111110);
				digitalWrite(latchPin, HIGH); //take the latch pin high so the LEDs will light up:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
				delay(delayTime);		// pause before next value:
			}




}

/*

int dataPin = 2;
int latchPin = 3;
int clockPin = 4;

byte dec_digits[] = { 0b11000000,0b11111001,0b10100100,0b10110000,0b10011001,0b10010010,0b10000011,0b11111000,0b10000000,0b10011000 };

void setup() {
	//set pins to output so you can control the shift register
	pinMode(latchPin, OUTPUT);
	pinMode(clockPin, OUTPUT);
	pinMode(dataPin, OUTPUT);
}

void loop() {
	for (int tensColumn = 0; tensColumn < 10; tensColumn++) {
		for (int onesColumn = 0; onesColumn < 10; onesColumn++) {
			// take the latchPin low so 
			// the LEDs don't change while you're sending in bits:
			digitalWrite(latchPin, LOW);
			// shift out the bits:
			shiftOut(dataPin, clockPin, MSBFIRST, dec_digits[onesColumn]);
			shiftOut(dataPin, clockPin, MSBFIRST, dec_digits[tensColumn]);
			//take the latch pin high so the LEDs will light up:
			digitalWrite(latchPin, HIGH);
			// pause before next value:
			delay(300);
		}
	}
}

*/
