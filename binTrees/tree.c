#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

// Om noden är "tom" returnera 1, annars 0:
int is_empty(node *N) {
    return (N == 0);
}
// Returnera innehållet i noden:
value_type get_value(node *N) {
    if(is_empty(N)){
        printf("Fel! Can't get next from empty!");
    }
    return N->value;
}
// Returnera barnlänk till vänster, eller höger:
node *get_left(node *N) {
    if(is_empty(N)){
        printf("Fel! Can't get next from empty!");
    }
    return N->left_child;
}
node *get_right(node *N) {
    if(is_empty(N)){
        printf("Fel! Can't get next from empty!");
    }
    return N->right_child;
}
// Sätt in ett värde i trädet:
node *insert_value(value_type val, node *Tree){
    if(is_empty(Tree)){
        node * new_node = (node *)malloc(sizeof(node));
        new_node->value = val;
        new_node->right_child = NULL;
        new_node->left_child = NULL;
        return new_node;
    }
    else{
        if(val < get_value(Tree)){
            Tree->left_child = insert_value(val, get_left(Tree));
            return Tree;
        }
        else if(val > get_value(Tree)){
            Tree->right_child = insert_value(val, get_right(Tree));
            return Tree;
        }
    }
}
// Sök efter ett värde i trädet:
node *find_value(value_type val, node *Tree) {
}
