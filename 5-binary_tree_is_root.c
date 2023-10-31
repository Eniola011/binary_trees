#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to the node to check
 * Return: if node is a root return 1, otherwise return 0
 * If node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int root = 0;

	if (node == NULL)
	{
		return (0);
	}
	else if (node->parent == NULL)
	{
		root = 1;
	}

	return (root);
}
