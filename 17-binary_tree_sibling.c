#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: function must return a pointer to the sibling node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *parent = node->parent;

	if (parent->left == node && parent->right != NULL)
	{
		return (parent->right);
	}
	else if (parent->right == node && parent->left != NULL)
	{
		return (parent->left);
	}

	return (NULL);
}
