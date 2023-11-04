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

/**
 * binary_tree_height - a function that measures the height of a binary tree.
 *
 * @tree:  is a pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lef_h = 0;
	size_t rig_h = 0;

	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		if (tree->left)
			lef_h = 1 + binary_tree_height(tree->left);
		else
			lef_h = 0;

		if (tree->right)
			rig_h = 1 + binary_tree_height(tree->right);
		else
			rig_h = 0;

		if (rig_h > lef_h)
			return (rig_h);
		else
			return (lef_h);
	}
}
