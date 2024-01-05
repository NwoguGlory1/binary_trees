#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, i, pow = 1;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	for (i = 0; i < height; i++)
	{
		pow *= 2;
	}

	return (pow - 1 == size ? 1 : 0);
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

/**
* binary_tree_size- finds size of binary tree
*
* @tree: the tree
*
* Return: the size of the tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
