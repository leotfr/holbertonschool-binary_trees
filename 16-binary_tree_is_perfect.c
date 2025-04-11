#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: The height of the tree
 */
int height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);

	left_height = height(tree->left);
	right_height = height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * is_perfect_helper - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree
 * @depth: The depth of the current node
 * @level: The level of leaf nodes
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int is_perfect_helper(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (depth == level)
			return (1);
		else
			return (0);
	}

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_helper(tree->left, depth + 1, level) &&
		   is_perfect_helper(tree->right, depth + 1, level));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);

	depth = height(tree);

	return (is_perfect_helper(tree, 0, depth));
}
