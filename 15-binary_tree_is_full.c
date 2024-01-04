#include "binary_trees.h"

/**
* binary_tree_is_full- checks if a binary tree is full
*
* @tree: the tree
*
* Return: (1) if full, (0) otherwise
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);

	return (left * right);
}
