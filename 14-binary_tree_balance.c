#include "binary_trees.h"

/**
 * rec_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, return 0
 */
size_t rec_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = rec_height(tree->left);
	right = rec_height(tree->right);

	if (left > right)
	{
		return (left + 1);
	}

	return (right + 1);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (-1);
	}

	return (rec_height(tree) - 1);
}

/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * the balance factor
 * Return: tree is NULL, return 0
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
