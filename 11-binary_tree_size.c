#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the size.
 *
 * Return: size of binary tree , or 0 if it is null.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t num_node_l = 0;
	size_t num_node_r = 0;
	size_t sum = 0;

	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		num_node_r = binary_tree_size(tree->right);
		num_node_l = binary_tree_size(tree->left);
	}
	sum = num_node_r + num_node_l + 1;
	return (sum);
}
