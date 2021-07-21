#include "binary_trees.h"

/**
* binary_tree_node -  This function creates a new node.
* @parent: Parent node.
* @value: Value to be set inside the node.
* Return: Returns a pointer to the new node.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node != NULL)
	{
		new_node->parent = parent;
		new_node->right = NULL;
		new_node->left = NULL;
		new_node->n = value;
	}
	return (new_node);
}
