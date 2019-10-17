#include <stdio.h>

int main()
{
	//Variables
	unsigned int number_count;
	int smallest_number = 0x7FFF;
	int entered_number;

	//Program Title
	printf("Find the smallest of integers !!!");

	//Ask max number count
	printf("How many numbers you will enter ?\n");
	scanf("%d", &number_count);

	printf("\n");

	//Create loop to get numbers
	while(number_count != 0)
	{
		printf("Enter a number: ");
		scanf("%d", &entered_number);
		//Check if the entered number is smaller than the last smalles number
		if(entered_number <= smallest_number)
		{
			//Assign new smalles number
			smallest_number = entered_number;
		}

		printf("Entered Number is %d, Smallest Number is %d\n\n", entered_number, smallest_number);

		//Decrease number_count
		number_count--;
	}
	
	return 0;
}
