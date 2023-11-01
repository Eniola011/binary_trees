#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t l_height = binary_tree_height(tree->left);
	size_t r_height = binary_tree_height(tree->right);

	return (l_height > r_height) ? (l_height + 1) : (r_height + 1);
}
