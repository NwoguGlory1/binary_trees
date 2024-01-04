#include "binary_trees.h"

/**
* binary_tree_size- finds size of binary tree
*
* @tree: the tree
*
* Return: the size of the tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	int left_size = 0;
	int right_size = 0;

	if (!tree)
	{
		return (0);
	}

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
