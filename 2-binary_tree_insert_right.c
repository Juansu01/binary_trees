#include "binary_trees.h"

/**
* binary_tree_insert_right -  Insert node at the right of parent.
* @parent: Parent node.
* @value: Value to be set inside the node.
* Return: Returns a pointer to the right node.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_at_right;
	binary_tree_t *old_node_at_right;

	if (parent == NULL)
	{
		return (NULL);
	}
	node_at_right = binary_tree_node(parent, value);

	if (node_at_right == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{

		old_node_at_right = parent->right;
		parent->right = node_at_right;
		node_at_right->right = old_node_at_right;
		old_node_at_right->parent = node_at_right;
	}
	else
	{
		parent->right = node_at_right;
	}

	return (node_at_right);
}
