#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: nomber of nodes with 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t r, l;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (0);
	r = binary_tree_nodes(tree->right);
	l = binary_tree_nodes(tree->left);
	return (1 + r + l);
}
