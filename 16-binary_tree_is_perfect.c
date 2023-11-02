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
