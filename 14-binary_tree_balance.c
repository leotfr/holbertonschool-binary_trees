#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 *
 * @tree: const
 *
 * Return: 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - function that measures
 * the height factor of a binary tree
 *
 * @tree: const
 *
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((l > r) ? l : r);
	}

	return (0);
}
