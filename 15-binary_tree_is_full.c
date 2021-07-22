#include "binary_trees.h"

/**
* binary_tree_is_full - This function tells wether a tree is full or not.
* @tree: Pointer to the tree.
* Return: 1 if tree is full, 0 otherwise
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	else
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			return (1);
		}
		else if ((tree->left) && (tree->right))
		{
			return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
		}

	return (0);
	}
}
