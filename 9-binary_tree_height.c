#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r = 0;
	size_t l = 0;

	if (!tree)
		return (0);
	r = 1 + binary_tree_height(tree->right);
	l = 1 + binary_tree_height(tree->left);

	if (l > r)
		return (l);
	return (r);
}
