#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a tree in inorder manner.
 *
 * @tree: A pointer to a tree to traverse.
 * @func: A pointer to a function.
 *
 * Return: void.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
