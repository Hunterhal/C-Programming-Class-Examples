#include <stdio.h>


int take_power(int base, int power)
{
	int result = base;
		if(power == 0)
			return 1;

		else if( power == 1 )
			return base;

		else
		{
			while(power>1)
			{
				result *= base;
				power -= 1;
			}
		}
	return result;
}


int main()
{
	int entered_number = 0;
	int reversed_number = 0;
	int holder = 0;
	int decimal_counter = 4;
	int temp = 0;

	printf("Enter a 5 Digit Number To Check if It is Palindromic Number\n\n");
	printf("Number: ");
	scanf("%d", &entered_number);

	holder = entered_number;
	decimal_counter=4;
	while(decimal_counter>=0)
	{
		temp = holder / take_power(10, decimal_counter);  
		reversed_number += temp * take_power(10, (4 - decimal_counter));
		holder -= temp * take_power(10, decimal_counter);
		printf("DEBUG: %d, %d\n", temp, holder);
		decimal_counter--;
	}

	printf("Reversed Number is %d\n", reversed_number);

	if(entered_number == reversed_number)
	{
		printf("Enterred Number and Reversed Numbers are SAME\n");
	}
	else
	{
		printf("Enterred Number and Reversed Numbers are NOT SAME\n");
	}

	getchar();
	return 0;
}
