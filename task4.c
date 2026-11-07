#include <stdio.h>

int main()
{
	char customerName[100];
	int accountNumber;
	float withdrawalAmount;
	FILE *fptr;

	printf("Enter Customer Name: ");
	scanf(" %99[^\n]", customerName);

	printf("Enter Account Number: ");
	scanf("%d", &accountNumber);

	printf("Enter Withdrawal Amount: ");
	scanf("%f", &withdrawalAmount);

	fptr = fopen("bank_log.txt", "a");
	if (fptr == NULL)
	{
		printf("Error: Unable to open bank_log.txt.\n");
		return 1;
	}

	fprintf(fptr, "Customer Name: %s | Account Number: %d | Withdrawal Amount: %.2f\n",
			customerName, accountNumber, withdrawalAmount);
	fclose(fptr);

	printf("Transaction details saved successfully.\n");
	return 0;
}
