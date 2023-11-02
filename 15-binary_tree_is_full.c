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
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}

	if (is_parent_full(tree))
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	return (0);
}
