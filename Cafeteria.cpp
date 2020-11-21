#include <stdio.h>
#include <stdlib.h>

int main()
{

	//I	typed the code line (_CRT_SECURE_NO_WARNINGS) on preprocessor definitions so I can use scanf and fopen functions

	FILE* order; //Creates and opens file
	order = fopen("Bill.txt", "a");

	int product;
	int quantity;
	double total = 0;
	int counter = 0;

	printf("Item            Foods / Drinks             Price\n");
	printf("1               Hot Dog                    5.00\n");
	printf("2               Burger	                   8.79\n");
	printf("3               Pancake                    9.99\n");
	printf("4               Sandwich                   6.89\n");
	printf("5               Salad                      4.80\n");
	printf("6               Water                      3.49\n");
	printf("7               Soda                       4.99\n\n");

	printf("Type 1 - 7 to choose the food/drink: "); //If user types something different than that, the program finishes

	scanf("%d", &product);

	while (product >= 1 && product <= 7)
	{
		switch (product)
		{
		case 1:
			printf("Type the quantity of hot dogs you want to buy: ");
			scanf("%d", &quantity);
			printf("\n");
			fprintf(order, "1               Hot Dog                 %d                   5.00\n", quantity); //Adds to the file(Bill.txt)
			counter++;
			total = total + 5.0 * quantity;
			printf("Type 1 - 7 to buy something else or type a different value to stop buying: ");
			scanf("%d", &product);
			break;
		case 2:
			printf("Type the quantity of burgers you want to buy: ");
			scanf("%d", &quantity);
			printf("\n");
			fprintf(order, "2               Burger                  %d                   8.79\n", quantity);
			counter++;
			total = total + 8.79 * quantity;
			printf("Type 1 - 7 to buy something else or type a differrent value to stop buying: ");
			scanf("%d", &product);
			break;
		case 3:
			printf("Type the quantity of pancakes you want to buy: ");
			scanf("%d", &quantity);
			printf("\n");
			fprintf(order, "3               Pancake                 %d                   9.99\n", quantity);
			counter++;
			total = total + 9.99 * quantity;
			printf("Type 1 - 7 to buy something else or type a different value to stop buying: ");
			scanf("%d", &product);
			break;
		case 4:
			printf("Type the quantity of sandwiches you want to buy: ");
			scanf("%d", &quantity);
			printf("\n");
			fprintf(order, "4               Sandwich                %d                   6.89\n", quantity);
			counter++;
			total = total + 6.89 * quantity;
			printf("Type 1 - 7 to buy something else or type a different value to stop buying: ");
			scanf("%d", &product);
			break;
		case 5:
			printf("Type the quantity of salads you want to buy: ");
			scanf("%d", &quantity);
			printf("\n");
			fprintf(order, "5               Salad                   %d                   4.80\n", quantity);
			counter++;
			total = total + 4.80 * quantity;
			printf("Type 1 - 7 to buy something else or type a different value to stop buying: ");
			scanf("%d", &product);
			break;
		case 6:
			printf("Type the quantity of waters you want to buy: ");
			scanf("%d", &quantity);
			printf("\n");
			fprintf(order, "6               Water                   %d                   3.49\n", quantity);
			counter++;
			total = total + 3.49 * quantity;
			printf("Type 1 - 7 to buy something else or type a different value to stop buying: ");
			scanf("%d", &product);
			break;
		case 7:
			printf("Type the quantity of sodas you want to buy: ");
			scanf("%d", &quantity);
			printf("\n");
			fprintf(order, "7               Soda                    %d                   4.99\n", quantity);
			counter++;
			total = total + 4.99 * quantity;
			printf("Type 1 - 7 to buy something else or type a different value to stop buying: ");
			scanf("%d", &product);
			break;
		}

	}

	fprintf(order, "\n\n");
	printf("\n\n");
	fclose(order); //Close file(Bill.txt)


	printf("Item            Food / Drink            Quantity            Price\n");

	char linha[255];
	int i;
	fopen("Bill.txt", "r"); //Open file again on read mode ("r")
	for (i = 0; i < counter; i++) //For loop to read all lines in the file
	{
		fgets(linha, 255, order);
		printf("%s", linha);
	}
	fclose(order); //Closes file
	printf("TOTAL = %f\n\n", total);


	system("pause");
	return 0;

}