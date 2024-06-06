#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: NULL if node is NULL or doesn't have a sibling, otherwise
 * pointer to the sibling of node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent)
	{
		if (node->parent->right == node)
			return (node->parent->left);
		else
			return (node->parent->right);
	}
	return (NULL);
}
