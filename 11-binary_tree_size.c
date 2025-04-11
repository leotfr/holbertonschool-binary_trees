#include "binary_trees.h"

/**
 * binary_tree_size - Measures the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of a binary tree
*/

size_t binary_tree_size(const binary_tree_t *tree)

{
	size_t tree_size = 0, under_tree_left = 0, under_tree_right = 0;

	if (tree == NULL)
	return (0);

	under_tree_left = binary_tree_size(tree->left);
	under_tree_right = binary_tree_size(tree->right);
	tree_size = 1 + (under_tree_left + under_tree_right);
	return (tree_size);
}
