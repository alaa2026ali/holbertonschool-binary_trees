#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node (the node that will own this node)
 * @value: Value to store inside the new node
 *
 * Return: Pointer to the newly created node, or NULL if memory allocation fails
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    /* Allocate memory for a new binary tree node */
    node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
        return (NULL); /* Return NULL if malloc fails */

    /* Assign the value to the node */
    node->n = value;

    /* Link the node to its parent */
    node->parent = parent;

    /* Initialize left and right children as empty (leaf node) */
    node->left = NULL;
    node->right = NULL;

    return (node); /* Return pointer to the newly created node */
}
