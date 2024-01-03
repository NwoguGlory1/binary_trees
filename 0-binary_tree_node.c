#include "binary_trees.h"

/**
 * binary_tree_node- creates a node
 *
 * @parent: the parent node
 * @value: the value of the node
 *
 * Return: the newly created node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
