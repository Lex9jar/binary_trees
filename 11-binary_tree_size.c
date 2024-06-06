#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree.
 * @tree: Pointer to a tree to measure.
 *
 * Return: 0 if tree is NULL, otherwise the size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		left = tree->left ? binary_tree_size(tree->left) : 0;
		right = tree->right ? binary_tree_size(tree->right) : 0;

		return (left + right + 1);
	}
	return (0);
}
