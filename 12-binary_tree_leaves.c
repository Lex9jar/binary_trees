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
