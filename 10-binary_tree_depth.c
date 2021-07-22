#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth a node in a binary tree
 * @tree: ptr node
 * Return: depth node in a binary tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter_depth = 0, i;

	if (tree == NULL)
		return (0);

	for (i = 0; tree->parent != NULL; i++)
	{
		counter_depth++;
		tree = tree->parent;
	}

	return (counter_depth);
}
