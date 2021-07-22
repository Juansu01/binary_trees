#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree
 * @tree: pointer to the root node
 * @func: pointer to a function to call
 * Return: Nothing.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (func == NULL)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
