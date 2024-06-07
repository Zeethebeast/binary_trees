#include "binary_trees.h"

/**
 * binary_tree_inorder - trasverses a binary-tree using in-order
 * @tree: pointer to the node
 * @func: A funtion pointer
 * @Return: 0 on success and 1 on failure
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
