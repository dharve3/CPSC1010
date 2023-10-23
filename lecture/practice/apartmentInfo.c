#include <stdio.h>
#include <string.h>


typedef struct {
	char itemName[30];
	int itemQty;
	char needed[4];
} apartmentItem;


apartmentItem addToList(char newItem[], int newQty); 


int main() {
	char addItemName[30]; 
	char whiteSpace;
	int addQty, i, numItems = 0, more = 1;
	apartmentItem itemInfo;
	apartmentItem listForApartment[25];

	while(more) {
		printf("\n\nApartment item:  ");
		fgets(addItemName, 30, stdin);
		addItemName[strlen(addItemName)-1] = '\0';
		// scanf("%s", addItemName);

		printf("How many?  ");
		scanf("%i", &addQty);

		itemInfo = addToList(addItemName, addQty);
		
		listForApartment[numItems] = itemInfo;
		numItems++;

		printf("\n\nAnother item?  (1 for yes, 0 for no)  ");
		scanf("%i", &more);
		scanf("%c", &whiteSpace);
	}

	printf("\n\nItems in list:  \n");
	for(i = 0; i < numItems; i++) {
		printf("\t%d %-15s  needed: %s\n", 
			 	 listForApartment[i].itemQty, 
				 listForApartment[i].itemName,
				 listForApartment[i].needed);
	}
	printf("\n\n");
			
	return 0;
}



apartmentItem addToList(char newItem[], int newQty) {
	apartmentItem itemToAdd;
	int needed;

	strcpy(itemToAdd.itemName, newItem);
	itemToAdd.itemQty = newQty;

	printf("Need the item (1) or already have it (0):  ");
	scanf("%d", &needed);
	if(needed)
		strcpy(itemToAdd.needed, "yes");
	else
		strcpy(itemToAdd.needed, "no");

	return itemToAdd;
}



