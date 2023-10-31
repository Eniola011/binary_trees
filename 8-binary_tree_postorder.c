#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through
 * a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * Return: If tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_preorder(tree->left, func); /* left subtree */
	binary_tree_preorder(tree->right, func); /* right subtree */
	func(tree->n); /* root */
}
