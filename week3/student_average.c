#include <stdio.h>

int main()
{

	int student_counter = 0;
	int grade;
	int sum = 0;
	int average;

	printf("Enter Student Grades\n");

	while(1)
	{
		printf("%d. Student Grade: ", student_counter + 1);
		scanf("%d", &grade);
	
		if(grade < 0)
		{
			printf("Negative Grade Enterred, Calculating Average\n\n");
			break;
		}
		student_counter++;
		sum += grade;
	}

	if(student_counter == 0)
	{
		printf("No Grade Enterred !!!\n");
	}
	else
	{
		average = sum / student_counter;
		printf("Average Score of %d Students is %d", student_counter, average);
	}


	getchar();
	return 0;
}
