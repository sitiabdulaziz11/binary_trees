#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: is a pointer to the node to find the sibling.
 *
 * Return: a pointer to the sibling node
 *
 * node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int left_child;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	left_child = (node->parent->left == node);
	return (left_child ? node->parent->right : node->parent->left);
}
