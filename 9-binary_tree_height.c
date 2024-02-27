#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_height = 0;
	size_t l_height = 0;

	if (!tree)
		return (0);
	r_height = 1 + binary_tree_height(tree->right);
	l_height = 1 + binary_tree_height(tree->left);

	return (left_height > right_height ? left_height : right_height);
}