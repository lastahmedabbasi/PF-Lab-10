#include <stdio.h>
#include <string.h>

int main()
{
	char names[10][50];
	char temp[50];

	printf("Enter 10 student names:\n");
	for (int i = 0; i < 10; i++) {
		printf("Student %d: ", i + 1);
		fgets(names[i], sizeof(names[i]), stdin);
		names[i][strcspn(names[i], "\n")] = '\0';
	}

	for (int pass = 0; pass < 9; pass++) {
		for (int i = 0; i < 9 - pass; i++) {
			if (strcmp(names[i], names[i + 1]) > 0) {
				strcpy(temp, names[i]);
				strcpy(names[i], names[i + 1]);
				strcpy(names[i + 1], temp);
			}
		}
	}

	printf("\nAlphabetical roster:\n");
	for (int i = 0; i < 10; i++) {
		printf("%s\n", names[i]);
	}

	return 0;
}
