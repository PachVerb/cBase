/*
*
*
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct NODE {
    struct NODE *left;
    struct NODE *right;
    int data;
}NODE ;
typedef struct Tree {
    struct NODE *root;
}Tree;
NODE *createNode(int data) {
    NODE *node = malloc(sizeof(NODE));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
struct Tree *createTree() {
    struct Tree *tree = (struct Tree *)malloc(sizeof(struct Tree));
    memset(tree,0, sizeof(struct Tree));
    tree->root = createNode(-1);
    return tree;
}
void insert(NODE *node,int data) {
    if(node->data < data && node->left) {
        insert(node->left,data);
    }
}
void insertTree(Tree *tree,int data) {

}
int main(void)
{
    double a = 25 / 2;

    printf("%2lf", a);

    return 0;
}
