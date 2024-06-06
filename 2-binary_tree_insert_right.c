#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert newnode to the right-child of another node
 * @parent: A pointer to the parent node of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = parent->right;

	if (parent->right != NULL)
	{
		parent->right->parent = newnode;
	}

	parent->right = newnode;
	return (newnode);
}
