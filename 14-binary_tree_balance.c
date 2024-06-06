#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a tree.
 * @tree: Pointer to a tree to measure.
 *
 * Return: 0 if the tree is NULL, otherwise the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t left = 0, right = 0;

		left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return (left > right ? left : right);
	}
	return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to a tree to measure.
 *
 * Return: 0 if tree is NULL, otherwise the balance factor of tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}
