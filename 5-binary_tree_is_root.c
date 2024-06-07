#include "binary_trees.h"
/**
 * binary_tree_is_root - This checks if a node is a root
 * @node: Is a pointer to the node to check
 * Return: 0 on success and 1 failure
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
