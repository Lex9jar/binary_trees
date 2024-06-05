#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another
 * node.
 * @parent: A pointer to the node to insert the right-child.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the newly craeted node, otherwise NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);

	right_child = malloc(sizeof(binary_tree_t));
	if (right_child == NULL)
		return (NULL);

	right_child->n = value;
	right_child->right = parent->right;
	parent->right = right_child;
	right_child->parent = parent;
	if (right_child->right)
		right_child->right->parent = right_child;
	right_child->left = NULL;

	return (right_child);
}
