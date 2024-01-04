#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return:  pointer to the uncle node
 * NULL if node is NULL
 * NULL if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* check if node has a parent and if parent has a sbling*/
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	binary_tree_t *parent = node->parent;
	binary_tree_t *granny = parent->parent;

	/* check if parent is right/left child of granny*/
	parent = node->parent;
	granny = parent->parent;

	if (granny->left == parent)
		return (granny->right);
	else if (granny->right == parent)
		return (granny->left);
	else
		return (NULL);
}
