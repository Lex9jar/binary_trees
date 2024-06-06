#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the tree to compute.
 *
 * Return: 0 if tree is NULL, otherwise the number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		if (tree->left == NULL && tree->right == NULL)
			return (1);

		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);

		return (left + right);
	}
	return (0);
}

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

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the tree to compute.
 *
 * Return: 0 if tree is NULL or not a perfect tree, otherwise 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		if (binary_tree_nodes(tree->left) == binary_tree_nodes(tree->right))
			if (binary_tree_leaves(tree->left) == binary_tree_leaves(tree->right))
				return (1);
		return (0);
	}
	return (0);
}
