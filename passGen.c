#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 1. Zufallszahlen Int (0-50)
// 2. Zufallszahlen Char (0-25)
// 3. Char Zufallszahl in Buchstaben umwandeln
// 4. Zufallszahlen und Zufallsbuchstaben in Zufälliger
//	Reihenfolge zusammen schreiben


int main() {
	int randInt;
	char randChar;
	char pass[25];

	srand(time(NULL));

	for (int i=0; i < 25; i++) {
		randInt = rand() % 50;
		randChar = rand() % 25;
		printf("The number is: %d\n", randInt);
		pass[i] = (char)randInt;
		printf("Pass: %d -> %d\n", i, pass[i]);
	}

	return 0;
}

char randomCharacter(int count) {
	char letter;

	

	letter = 
	
	return letter;
}

