#include "binary_trees.h"
/**
* binary_tree_is_root - check if a given node is a root
* @node: pointer to the node check
* Return: 1 or 0 if node is the root
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
    	if (node == NULL)
		return (0);
	return (0);
}
