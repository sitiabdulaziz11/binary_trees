#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1
 * child in a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to count the number of
 * nodes.
 *
 * Return: number of node with at list 1 child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t rnum = 0;
	size_t lnum = 0;

	if (tree == NULL)
		return (0);

	else
	{
		lnum = binary_tree_nodes(tree->left);
		rnum = binary_tree_nodes(tree->right);

		if (tree->left != NULL || tree->right != NULL)
			return (lnum + rnum + 1);
	}
	return (lnum + rnum);
}
