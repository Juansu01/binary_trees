#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the number of nodes with at least one child.
* @tree: Pointer to the tree.
* Return: Returns the number of nodes.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t number_of_nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			number_of_nodes++;
		}
		if (tree->left != NULL)
		{
			number_of_nodes += binary_tree_nodes(tree->left);
		}
		if (tree->right != NULL)
		{
			number_of_nodes += binary_tree_nodes(tree->right);
		}
	}
	return (number_of_nodes);
}
