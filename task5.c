#include <stdio.h>

int main()
{
	FILE *fptr;
	int rollNo, marks;
	char name[50];

	fptr = fopen("marks.txt", "r");

	if (fptr == NULL)
	{
		printf("Error: File Not Found!\n");
		return 1;
	}

	printf("%-10s %-20s %-10s\n", "RollNo", "Name", "Marks");
	printf("----------------------------------------\n");

	while (fscanf(fptr, "%d %49s %d", &rollNo, name, &marks) == 3)
	{
		printf("%-10d %-20s %-10d\n", rollNo, name, marks);
	}

	fclose(fptr);
	return 0;
}
