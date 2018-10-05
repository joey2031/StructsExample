#include <stdio.h>
#include "Header.h"

// The struct is made in Header.h


int main(void) {
	struct human bob = {"billy", "bob", 18};

	printf("This is the first name: %s\n", bob.firstName);
	printf("This is the last name: %s\n", bob.lastName);
	printf("This is the age: %d\n", bob.age);


	printf("Enter a number to change the age variable in the struct: ");
	scanf("%d", &bob.age);
	printf("The new value in the age varable of the struct human is: %d", bob.age);





}
