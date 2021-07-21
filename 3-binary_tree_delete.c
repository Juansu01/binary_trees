#include "binary_trees.h"

/**
* binary_tree_delete -  This function deletes a tree.
* @tree: Value to be set inside the node.
* Return: Void function, doesn't return.
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
