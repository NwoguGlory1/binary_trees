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
	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	if (tree->left)
		left_height += 1;
	if (tree->right)
		right_height += 1;

	return (left_height - right_height);
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

	/* height= 1 + the greater value from either leftheight or rightheight */
	if (tree->left)
		leftHeight = 1 + binary_tree_height(tree->left);

	if (tree->right)
		rightHeight = 1 + binary_tree_height(tree->right);

	if (leftHeight > rightHeight)
		return (leftHeight);
	else
		return (rightHeight);
}
