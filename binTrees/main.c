#include <stdio.h>
#include "tree.h"

void indent(int num) {
   int ix;
   for(ix = 0; ix < num; ix++) printf(" ");
}

void _print_tree(node *tree, int inum) {
   if(is_empty(tree)) return;
   indent(inum); printf("value: %d\n", tree->value);
   if(!is_empty(get_left(tree))) {
      indent(inum);
      printf("  left:\n");
      _print_tree(get_left(tree), inum+4);
   }
   if(!is_empty(get_right(tree))) {
      indent(inum);
      printf("  right:\n");
      _print_tree(get_right(tree), inum+4);
   }
}

void print_tree(node *tree) {
   _print_tree(tree, 0);
}

int main(void) {
   node *tree = 0;
   tree = insert_value(4, tree);
   print_tree(tree);
   tree = insert_value(1, tree);
   print_tree(tree);
   tree = insert_value(6, tree);
   print_tree(tree);
   tree = insert_value(3, tree);
   print_tree(tree);
   tree = insert_value(2, tree);
   print_tree(tree);
   tree = insert_value(7, tree);
   print_tree(tree);
   return 0;
}
