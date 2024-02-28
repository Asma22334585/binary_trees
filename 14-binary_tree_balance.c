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
	if (!tree->left && !tree->right)
		return (0);

	r_height = 1 + binary_tree_height(tree->right);
	l_height = 1 + binary_tree_height(tree->left);

	if (l_height > r_height)
		return (l_height + 1);
	return (r_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);
	r = binary_tree_height(tree->right);
	l = binary_tree_height(tree->left);
	return (l - r);
}
