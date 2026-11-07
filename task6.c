 #include <stdio.h>
#include <string.h>

int main(void)
{
	char username[100], password[100];
	char savedUsername[100], savedPassword[100];
	FILE *file;

	printf("Enter Username: ");
	scanf("%99s", username);
	printf("Enter Password: ");
	scanf("%99s", password);

	file = fopen("credentials.txt", "r");
	if (file == NULL)
	{
		printf("Access Denied!\n");
		return 1;
	}

	if (fscanf(file, "%99s %99s", savedUsername, savedPassword) == 2 &&
		strcmp(username, savedUsername) == 0 &&
		strcmp(password, savedPassword) == 0)
	{
		printf("Access Granted!\n");
	}
	else
	{
		printf("Access Denied!\n");
	}

	fclose(file);
	return 0;
}
