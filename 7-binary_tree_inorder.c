#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes through binary tree in-order
 * @tree: ptr to the root node
 * @func: ptr to a function to call
 * Return: Void.
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
