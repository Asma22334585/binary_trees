#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of a node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}

#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to node in the tree to measure its depth
 * Return: height of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	return (0);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node.
 * @second: pointer to the second node.
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t f, s;

	if (!first || !second)
		return (NULL);

	f = binary_tree_depth(first);
	s = binary_tree_depth(second);

	while (f > s)
	{
		first = first->parent;
		f--;
	}
	while (s > f)
	{
		second = second->parent;
		s--;
	}
	while (first != second)
	{
		first = first->parent;
		second = second->parent;
	}

	return ((binary_tree_t *)first);
}
