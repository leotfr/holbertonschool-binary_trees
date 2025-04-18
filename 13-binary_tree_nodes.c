#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 *
 * @tree: const
 *
 * Return: nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	nodes = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (nodes);
}
