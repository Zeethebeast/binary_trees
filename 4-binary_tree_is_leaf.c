#include "binary_trees.h"
/**
* binary_tree_is_leaf - This checks if a node is a leaf
* @node: Is a pointer to the node to check
* Return: 0 on success and 1 failure
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
