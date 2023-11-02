#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to count the number of
 * leaves.
 *
 * Return: number of leaves, or 0 if NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_r = 0;
	size_t leaf_l = 0;
	size_t leaf;

	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		if (tree->right == NULL && tree->left == NULL)
			return (1);

		leaf_r = binary_tree_leaves(tree->right);
		leaf_l = binary_tree_leaves(tree->left);
	}
	leaf = leaf_r + leaf_l;
	return (leaf);
}
