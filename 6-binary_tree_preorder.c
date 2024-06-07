
#include "binary_trees.h"
/**
* binary_tree_preorder - a function that trasverses binary-tree using preorder
* @func: a function pointer.
* @tree: a pointer to the root node
* Return: 0 on success and 1 on failure.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
