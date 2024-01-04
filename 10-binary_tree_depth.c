#include "binary_trees.h"

/**
* binary_tree_depth - finds depth of a node
* @tree: the tree
*
* Return: the depth of node or 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree->parent)
	{
		return (0);
	}

	return (binary_tree_depth(tree->parent) + 1);
}
