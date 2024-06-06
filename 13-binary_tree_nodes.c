#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary
 * tree.
 * @tree: A pointer to a binary tree.
 *
 * Return: 0 if tree is NULL, otherwise the number of nodes with at least 1
 * child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t node = 0, left = 0, right = 0;

		node = (tree->left || tree->right) ? 1 : 0;
		left = binary_tree_nodes(tree->left);
		right = binary_tree_nodes(tree->right);

		return (left + right + node);
	}
	return (0);
}
