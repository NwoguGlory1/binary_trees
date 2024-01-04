#include "binary_trees.h"

/**
* binary_tree_leaves- counts leaves in binary tree
*
* @tree: the tree
*
*Return: the number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves = 0;

	if (!tree)
	{
		return (0);
	}

	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right) + 1;

	if (tree->left || tree->right)
	{
		leaves -= 1;
	}

	return (leaves);
}
