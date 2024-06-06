/**
 * binary_tree_insert_left - Insert newnode to the left-child of another node
 * @parent: A pointer to the parent node of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */

#include"binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = parent->left;
	newnode->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = newnode;
	}

	parent->left = newnode;
	return (newnode);
}
