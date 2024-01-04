#include "binary_trees.h"

/**
 * binary_tree_insert_left- inserts a node to left.
 * @parent: the parent tree
 * @value: value of the node
 *
 * Return: the newly inserted node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = binary_tree_node(parent, value);

	if (!new || !parent)
		return (NULL);

	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}

	parent->left = new;
	new->n = value;
	new->parent = parent;

	return (new);
}
