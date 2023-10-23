#include <stdio.h>
#include <string.h>

typedef struct {
	char pizzaName[30];
	char ingredients[70];
} pizzaIngredients;


// void printPizzas(availablePizzas, 3);


int main() {
	pizzaIngredients availablePizzas[3];

	strcpy(availablePizzas[0].pizzaName, "Barbecue");
	strcpy(availablePizzas[0].ingredients, 
		    "Beef, chicken, bacon, barbecue sauce");
	strcpy(availablePizzas[1].pizzaName, "Carbonara");
	strcpy(availablePizzas[1].ingredients, 
		    "Mushrooms, onion, creamy sauce");
	strcpy(availablePizzas[2].pizzaName, "Ham & Cheese");
	strcpy(availablePizzas[2].ingredients, 
		    "Ham, cheese, bacon");

	// print the pizzas
	// printPizzas(availablePizzas, 3);
	printf("\n\nPizza\t\tIngredients\n");
	printf("----------------------------------------------------\n\n");
	for (int i = 0; i < 3; i++) {
		printf("%s\t%s\n", availablePizzas[i].pizzaName,
								 availablePizzas[i].ingredients);
	}
	printf("\n\n");

	return 0;
}
