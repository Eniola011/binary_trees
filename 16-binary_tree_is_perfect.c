#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: if node is a leaf return 1 otherwise return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int leaf = 0;

	if (node == NULL)
	{
		return (0);
	}
	else if (node->left == NULL && node->right == NULL)
	{
		leaf = 1;
	}

	return (leaf);
}

/**
 * is_parent_full - checks if a given node is a parent
 * @node: pointer to the node to check
 * Return: if node is a root return 1, otherwise return 0
 * If node is NULL, return 0
 */
int is_parent_full(const binary_tree_t *node)
{
	int parent = 0;

	if (node && (node->left && node->right))
	{
		parent = 1;
	}

	return (parent);
}

/**
 * tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, return 0
 */
int tree_height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	if (left > right)
	{
		return (left + 1);
	}

	return (right + 1);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: if tree is NULL, your function must return 0
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && tree_height(tree->left) == tree_height(tree->right))
	{
		if (tree_height(tree->left) == -1)
		{
			return (1);
		}

		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
		{
			return (1);
		}

		if (is_parent_full(tree))
		{
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
		}
	}

	return (0);
}
