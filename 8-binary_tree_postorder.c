#include "binary_trees.h"

/**
 * binary_tree_postorder - trasverses a binary-tree using postorder
 * @tree: pointer to the node
 * @func: A funtion pointer
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
