#include "binary_trees.h"

/**
 * tree_height - find the height of binary tree using recursion
 * @tree: ptr to the root node of the tree
 * @height: height of tree
 * Return: height of a tree otherwise the given tree value.
*/

size_t tree_height(const binary_tree_t *tree, size_t height)
{
	size_t left, right;

	if (tree == NULL)
		return (height);

	left = tree_height(tree->left, height + 1);

	right = tree_height(tree->right, height + 1);

	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: ptr to the root node of the tree
 * Return: height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree_height(tree, 0) - 1);
}
