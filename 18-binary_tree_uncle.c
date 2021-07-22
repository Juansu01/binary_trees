#include "binary_trees.h"

/**
* binary_tree_sibling - This function returns the sibling of a node.
* @node: Node to be evaluated.
* Return: Returns a node.
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *to_parent;

	if (node == NULL || node->parent == NULL)
	{
		return (0);
	}
	else
	{
		to_parent = node->parent;

		if (to_parent->left != NULL && to_parent->left != node)
		{
			return (to_parent->left);
		}
		else if (to_parent->right != NULL && to_parent->right != node)
		{
			return (to_parent->right);
		}
		else
		{
			return (NULL);
		}
	}
}

/**
* binary_tree_uncle - This function returns the uncle of a node.
* @node: Node to be evaluated.
* Return: Returns a node.
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (binary_tree_sibling(node->parent));
	}
}
