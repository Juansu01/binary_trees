#include "binary_trees.h"

/**
 * binary_tree_balance - Find the balance of two trees
 * @tree: ptr to the root node of the tree
 * Return: Balance of both trees
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_tree_height, right_tree_height;
	int balance = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_tree_height = tree_height_post(tree->left);
		right_tree_height = tree_height_post(tree->right);

		balance = left_tree_height - right_tree_height;
	}
	return (balance);

}

/**
 * tree_height_post - find the height of binary tree using recursion
 * @tree: ptr to the root node of the tree
 * Return: height of a tree otherwise the given tree value.
*/

size_t tree_height_post(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = tree_height_post(tree->left);

	right = tree_height_post(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
