#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to a tree to measure.
 *
 * Return: 0 if tree is NULL, otherwise the balance factor of tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		left = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

		return (left - right);
	}
	return (-1);
}
