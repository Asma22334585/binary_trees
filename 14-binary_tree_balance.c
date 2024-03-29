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
		return (-1);
	r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	l = tree->left ? 1 + binary_tree_height(tree->left) : 0;

	if (l > r)
		return (l);
	return (r);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
