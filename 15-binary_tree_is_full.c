#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 *
 * @tree: is a pointer to the root node of the tree to check.
 *
 * Return: 0 if null.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lft, rt;

	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		if (tree->left && tree->right)
		{
			lft = binary_tree_is_full(tree->left);
			rt = binary_tree_is_full(tree->right);

			if (lft == 0 || rt == 0)
				return (0);
			return (1);
		}
		else if (!tree->left && !tree->right)
			return (1);
		else
			return (0);
	}
	return (0);
}
