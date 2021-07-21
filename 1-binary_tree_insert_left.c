#include "binary_trees.h"

/**
* binary_tree_insert_left -  Insert node at the left of parent.
* @parent: Parent node.
* @value: Value to be set inside the node.
* Return: Returns a pointer to the left node.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_at_left;

	if (parent == NULL)
	{
		return (NULL);
	}
	node_at_left = binary_tree_node(parent, value);

	parent->left = node_at_left;

	return (node_at_left);
}
