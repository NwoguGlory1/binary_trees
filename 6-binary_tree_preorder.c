#include "binary_trees.h"

/**
 * binary_tree_preorder - function that pre-transverses a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nil
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	func(tree->n);
	/* calls eachcurrent node for you to appy operatn on the data*/

	binary_tree_preorder(tree->left, func);
	/* recurseive going deeper in left subtree till a leaf node is got*/

	binary_tree_preorder(tree->right, func);
	/* this time, right subtree*/
}
