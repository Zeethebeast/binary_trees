#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t max_height = helper_binary_tree(tree) - 1;

	return (max_height);

}


/**
 * helper_binary_tree - Helper function to calculate the height
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree
 */
size_t helper_binary_tree(const binary_tree_t *tree)
{
	size_t left_height;
    size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = helper_binary_tree(tree->left);
	right_height = helper_binary_tree(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
