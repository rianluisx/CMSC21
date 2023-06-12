/* Checks planet names */

#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    // stores the planets
	char *planets[] = {"Mercury", "Venus", "Earth",
					  "Mars", "Jupiter", "Saturn",
					  "Uranus", "Neptune", "Pluto"};
	int i, j;


	for (i = 1; i < argc; i++) {

		//
		for (j = 0; j <NUM_PLANETS; j++)

			// checks the array if argument is a planet
			if (strcmp(argv[i], planets[j]) == 0) {
				printf("%s is planet %d\n", argv[i], j + 1);
				break;
			}

		// argument is not a planet
		if (j == NUM_PLANETS)
			printf("%s is not a planet\n", argv[i]);
	}

	return 0;
}