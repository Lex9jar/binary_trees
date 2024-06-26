#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a tree in preorder manner,
 * sametime using a pointer to a function.
 *
 * @tree: Tree to traverse.
 * @func: Pointer to a function.
 *
 * Return: void.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
