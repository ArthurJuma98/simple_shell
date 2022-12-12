#include <stdio.h>

int main(void)
{
	char name[100];
	char grade;

	printf("please enter your name\n");
	fgets(name, sizeof(name), stdin);
	printf("Enter your grade to get remark\n");
	scanf("%c", &grade);

	switch (grade)
	{
		case 'A':
			printf("you are an excellent student\n");
			break;
		case 'B':
			printf("you are a good student\n");
			break;
		default:
			printf("please enter a valid greade to get remark\n");
	}
	return (0);
}
