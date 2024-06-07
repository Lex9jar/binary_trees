#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes.
 *         If no common ancestor was found, your function must return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mum, *pops;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mum = first->parent, pops = second->parent;
	if (first == pops || !mum || (!mum->parent && pops))
		return (binary_trees_ancestor(first, pops));
	else if (mum == second || !pops || (!pops->parent && mum))
		return (binary_trees_ancestor(mum, second));

	return (binary_trees_ancestor(mum, pops));
}
