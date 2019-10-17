#include <stdio.h>

#define True 'T'
#define False 'f'

int main()
{
	//Variables
	char control_input = 'T';
	int smallest_number = 0x7FFF;
	int entered_number;

	//Program Title
	printf("Find the smallest of integers !!!");
	printf("Enter number with control input as 10 f or 50 T\n");
	printf("If control input is 0 program ends\n\n");

	//Create loop to get numbers
	while(True)
	{
		printf("Enter a number and control input: ");
		scanf("%d %c", &entered_number, &control_input);
		//Check if the entered number is smaller than the last smalles number
		if(entered_number <= smallest_number)
		{
			//Assign new smalles number
			smallest_number = entered_number;
		}

		printf("Entered Number is %d, Smallest Number is %d\n\n", entered_number, smallest_number);

		//Check if control input is False or True
		if(control_input == False)
		{
			printf("Program terminates with smallest number %d\n", smallest_number);
			break;
		}
	}
	
	return 0;
}
