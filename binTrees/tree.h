typedef int value_type;

typedef struct _node_S{
  value_type value;
  struct _node_S * left_child, * right_child;
}node;

// Om noden är "tom" returnera 1, annars 0:
int is_empty(node *N);
// Returnera innehållet i noden:
value_type get_value(node *N);
// Returnera barnlänk till vänster, eller höger:
node * get_left(node *N);
node * get_right(node *N);
// Sätt in ett värde i trädet:
node * insert_value(value_type value, node *Tree);
// Sök efter ett värde i trädet:
node * find_value(value_type value, node *Tree);
