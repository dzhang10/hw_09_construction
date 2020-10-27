# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# include "item.h"

void print_item(struct item * given){
	printf("Item %s cost $%d\n",given->name, given->cost);
}

struct item * new_item(char *n, int i){
	struct item *nu;

	nu = malloc( sizeof(struct item));

	strncpy(nu->name, n, sizeof(nu->name)-1);
	nu->cost = i;

	return nu;
}

void change_price(struct item * given, int new_cost){

	given->cost= new_cost;

}

void change_name(struct item * given, char *n){

	strncpy(given->name, n, sizeof(given->name)-1);
}
