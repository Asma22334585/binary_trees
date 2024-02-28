#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t r, l, leaf;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);

	r = binary_tree_leaves(tree->right);
	l = binary_tree_leaves(tree->left);
	leaf = r + l;
	return (leaf);
}
