#include "binary_trees.h"

/**
 * binary_tree_postorder - Traveres a tree in a post-order manner.
 *
 * @tree: A pointer to a tree to travers.
 * @func: Pointer to a function.
 *
 * Return: void.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
