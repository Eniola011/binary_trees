#include "binary_trees.h"

/**
 * is_parent - checks if a given node is a parent
 * @node: pointer to the node to check
 * Return: if node is a root return 1, otherwise return 0
 * If node is NULL, return 0
 */
int is_parent(const binary_tree_t *node)
{
	int parent = 0;

	if (node && (node->left || node->right))
	{
		parent = 1;
	}

	return (parent);
}

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, return 0.
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (is_parent(tree))
	{
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	}

	return (0);
}
