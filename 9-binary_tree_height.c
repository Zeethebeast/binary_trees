#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - this function calculates the height of a tree
 * @tree: This is pointer to the node
 * @size_t: this is the height
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}


	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? left_height: right_height) + 1;
}
