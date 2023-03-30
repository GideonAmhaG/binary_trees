#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h, s;

	if (tree == NULL)
		return (0);
	h = binary_tree_height(tree);
	s = (int)binary_tree_size(tree);
	if (s == (2 << h) - 1)
		return (1);
	return (0);
}
