#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *leftChild;
    struct Node *rightChild;
} Node_t;

typedef struct
{
    Node_t *root;
} Tree_t;


bool bst_insert(Tree_t *tree, int data_to_insert)
{
    if (tree->root == NULL)
    {
        return false;
    }

    // Tree iterator node.
    Node_t *itr = tree->root;

    // How to find a position for the new Node?
    while (itr != NULL)
    {
        while ( itr != NULL )
        {
            // Look right
            if (data_to_insert > itr->data)
            {
                itr = itr->rightChild;
            }
            // Look left.
            else if (data_to_insert < itr->data)
            {
                itr = itr->leftChild;
            }
        }

        itr = (Node_t *)malloc(sizeof(Node_t));
        itr->data = data_to_insert;
        itr->leftChild = NULL;
        itr->rightChild = NULL;
    }

}


void print_tree_helper(Node_t *node)
{
    if (node == NULL)
    {
        return;
    }
    print_tree_helper(node->leftChild);
    printf("%d - ", node->data);
    print_tree_helper(node->rightChild);
}

void print_tree(Tree_t *tree)
{
    if (tree == NULL)
    {
        return;
    }
    print_tree_helper(tree->root);
}

void delete_tree_helper(Node_t* node)
{
    if (node == NULL)
    {
        return;
    }
    delete_tree_helper(node->leftChild);
    delete_tree_helper(node->rightChild);
    free(node);
}

void delete_tree(Tree_t * tree)
{
    if (tree == NULL)
    {
        return;
    }

}

