#include "binary_trees.h"

/**
* binary_tree_balance- measures the balance factor of a binary tree
*
* @tree: the tree
*
* Return: the balance
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}


/**
 * binary_tree_height -  function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height of a binary tree
 * 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (!tree)
		return (0);

	leftHeight = tree->left ? binary_tree_height(tree->left) + 1 : 1;
	rightHeight = tree->right ? binary_tree_height(tree->right) + 1 : 1;

	return (leftHeight > rightHeight ? leftHeight : rightHeight);
}
