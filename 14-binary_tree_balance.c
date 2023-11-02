#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor of a
 * binary tree
 *
 * @tree:  is a pointer to the root node of the tree to measure
 * the balance factor.
 *
 * Return: 0 if NUll.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lft_ht, rt_ht;

	if (tree == NULL)
		return (0);

	lft_ht = binary_tree_height(tree->left);
	rt_ht = binary_tree_height(tree->right);

	return (lft_ht - rt_ht);
}
