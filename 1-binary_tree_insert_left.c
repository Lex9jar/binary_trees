#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Pointer to the node to insert a left-child.
 * @value: Value to be store in the child.
 *
 * Return: Pointer to the child, otherwise NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);
	left_child = malloc(sizeof(binary_tree_t));
	if (left_child == NULL)
		return (NULL);

	left_child->n = value;
	left_child->left = parent->left;
	parent->left = left_child;
	left_child->parent = parent;
	if (left_child->left)
		left_child->left->parent = left_child;
	left_child->right = NULL;

	return (left_child);
}
