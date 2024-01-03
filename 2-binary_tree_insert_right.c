#include "binary_trees.h"

/**
 * binary_tree_insert_right- inserts a node to right.
 *                          If node exists, push it a level down
 *
 * @parent: the parent tree
 * @value: value of the node
 *
 * Return: the newly inserted node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = binary_tree_node(parent, value);

	if (!new || !parent)
	{
		return (NULL);
	}

	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}

	parent->right = new;
	new->n = value;

	return (new);
}
