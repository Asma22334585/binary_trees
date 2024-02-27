#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t R = 0;
	size_t L = 0;

	if (!tree)
		return (0);
	R = 1 + binary_tree_height(tree->right);
	L = 1 + binary_tree_height(tree->left);

	if (L > R)
		return (L);
	else
		return (R);
}
