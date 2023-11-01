#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child.
 * @parent:  is a pointer to the node to insert the left-child in.
 *
 * @value: is the value to store in the new node.
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NUL)
		return (NULL);

	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;

	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = new_node;
		new_node->left = temp;
	}
	parent->left = new_node;

	return (new_node);
}
