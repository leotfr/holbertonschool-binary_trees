#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: the depth of a node in a binary tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)

{
	size_t parent_depth = 0;

	if (tree == NULL)
	return (0);

	if (tree->parent)
	parent_depth = binary_tree_depth(tree->parent) + 1;
	return (parent_depth);
}
