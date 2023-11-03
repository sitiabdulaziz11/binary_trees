#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree:  is a pointer to the root node of the tree to check.
 *
 * Return: 0 if null.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	binary_tree_is_perfect(tree->right);
	binary_tree_is_perfect(tree->left);

	if (tree->right == NULL && tree->left == NULL)
		return (1);
	return (0);
}
