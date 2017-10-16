struct node { int i; struct node *next; };

void print_list(struct node *p);
struct node * insert_front(struct node *p, int i);
struct node * free_list(struct node *p);
