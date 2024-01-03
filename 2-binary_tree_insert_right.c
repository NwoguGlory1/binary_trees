#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node on leftchild of anotherNode
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	binary_tree_t *NewNode = malloc(sizeof(binary_tree_t));

	if (!NewNode)
	return (NULL);

	NewNode->n = value;
	NewNode->parent = parent;
	NewNode->left = NULL;
	NewNode->right = NULL;

	if (parent->right != NULL)
	{
	NewNode->right = parent->right;
	NewNode->right->parent = NewNode;
/*updates the parent pointer of the exisitng left child to point to new node */
	}

	parent->right = NewNode;

	return (NewNode);
}
