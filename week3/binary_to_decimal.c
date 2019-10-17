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
	int binary;
	int holder;
	int digit_counter;
	int temp;
	int decimal = 0;
	printf("Binary to Decimal Converter, Max 9 Digits\n\n");

	printf("Enter Binary Number: ");
	scanf("%d", &binary);
	holder = binary;
	digit_counter = 8;
	while(digit_counter>=0)
	{
		temp = holder / take_power(10, digit_counter);
		holder -= temp * take_power(10, digit_counter);
		decimal += temp * take_power(2, digit_counter);
		digit_counter--;
	}
	printf("Binary = %d, Decimal = %d\n", binary, decimal);
		
	getchar();
	return 0;
}
