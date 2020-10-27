struct item {char name[256]; int cost;};

void print_item(struct item *);

struct item * new_item(char *n, int cost);

void change_price(struct item *, int new_price);

void change_name(struct item *, char *n);
