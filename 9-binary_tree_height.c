#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);
	if (tree->left)
		a = 1 + binary_tree_height(tree->left);
	else
		a = 0;
	if (tree->right)
		b = 1 + binary_tree_height(tree->right);
	else
		b = 0;
	if (a > b)
		return (a);
	else
		return (b);
}
