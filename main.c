#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "item.h"

int main(){

	srand(time(NULL));

	struct item *a = new_item("Phone",rand()%1000);
	struct item *b = new_item("Laptop",rand()%1000);

	print_item(a);
	print_item(b);

	change_price(a, rand()%1000);
	change_name(b, "HP Laptop");

	print_item(a);
	print_item(b);

	free(a);
	free(b);
	return 0;
}
