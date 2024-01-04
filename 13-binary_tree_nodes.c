#include "binary_trees.h"

/**
* binary_tree_nodes- counts nodes with at least a child
*
* @tree: the tree
*
*Return: the number of nodes with children
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes = 0;

	if (!tree)
	{
		return (0);
	}

	nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

	if (!tree->left && !tree->right)
	{
		nodes -= 1;
	}

	return (nodes);
}
