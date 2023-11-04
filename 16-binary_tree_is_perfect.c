#include "binary_trees.h"
/**
 * perfect_tree - function that says if a tree is perfect or not
 * @tree: tree to check
 * Return: 0 if is not a perfect or other number that is the level of height
 */
int perfect_tree(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + perfect_tree(tree->left);
		r = 1 + perfect_tree(tree->right);
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - perfect or not a tree
 * @tree: tree to check
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int sum = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		sum = perfect_tree(tree);
		if (sum != 0)
		{
			return (1);
		}
		return (0);
	}
}
