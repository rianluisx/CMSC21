/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 /* maximum number of reminders */
#define MSG_LEN 60    /* max length of reminder message */


int read_line(char str[], int n); // function declaration

int main(void)
{
	char reminders[MAX_REMIND] [MSG_LEN + 3]; //stores in 2D array with MAX_REMIND memory location and length MSG_Len + 3


	char day_str[3], msg_str[MSG_LEN + 1];
	int day, i, j, num_remind = 0;

    // for loop that will keep asking the user
	for (;;) {

        // tells the user that they have reached the max number of reminder entry
		if (num_remind == MAX_REMIND) {
			printf("-- No space left --\n");
			break;
		}


		printf("Enter day and reminder: ");
		scanf("%2d", &day);

		// ends the loop & prints list of all reminders provided sorted by day.
        if (day == 0)
			break;
		sprintf(day_str, "%2d", day); // convert day to string form
		read_line(msg_str, MSG_LEN); // function that reads the reminders

        // compares where the day belongs
		for (i = 0; i < num_remind; i++)
			if (strcmp(day_str, reminders[i]) < 0)
				break;
        // move all strings below one poisition
		for (j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j - 1]);


		strcpy(reminders[i], day_str); // copies day to reminder
		strcat(reminders[i], msg_str); // concatenates reminder to day


		num_remind++;
	}

	printf("\nDay Reminder\n");
	for (i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]);

	return 0;
}

// function definition
int read_line(char str[], int n)
{
	int ch, i = 0;


	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
		str[i] = '\0';
		return i;
}