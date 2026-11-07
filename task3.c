#include <stdio.h>
#include <string.h>

int main()
{
	char email[100];
	char domain[100];
	char *atSymbol;

	printf("Enter email address: ");
	fgets(email, sizeof(email), stdin);
	email[strcspn(email, "\n")] = '\0';

	atSymbol = strchr(email, '@');

	if (atSymbol == NULL)
	{
		printf("Invalid Email Format\n");
	}
	else
	{
		strcpy(domain, atSymbol + 1);
		printf("Domain: %s\n", domain);
	}

	return 0;
}
