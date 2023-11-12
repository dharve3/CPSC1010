#include <stdio.h>

int main() {
	int age;

	fprintf(stdout, "How old are you?   ");
	scanf("%d", &age);

	if ( (age >= 13) && (age <= 19) ) {
		fprintf(stdout, "\nYou are a teenager!\n\n");
	}
	else if (age < 13) {
		fprintf(stdout, "\nYou are a child.\n\n");
	}
	else {
		fprintf(stdout, "\nYou are an adult.\n\n");
	}

	fprintf(stderr, "Go Tigers!\n\n");

	return 0;
}
