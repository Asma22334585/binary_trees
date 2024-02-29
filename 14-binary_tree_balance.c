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
	if (!tree->left && !tree->right)
		return (0);

	r = 1 + binary_tree_height(tree->right);
	l = 1 + binary_tree_height(tree->left);

	if (l > r)
		return (l + 1);
	return (r + 1);
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
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (l - r);
}
