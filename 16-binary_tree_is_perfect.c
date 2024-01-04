#include "binary_trees.h"
/* Function prototype for perfect_recursive*/
 int perfect_recursive(const binary_tree_t *tree, size_t height, size_t level);

/**
 * binary_tree_height -  function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height of a binary tree
 * 0 if tree is NULL
 */
/* Get the height of the leftmost path from root*/
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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, level = 0;
	/* check if tree is NULL*/
	if (!tree)
		return (0);

	height = binary_tree_height(tree);

	return (perfect_recursive(tree, height, level));
}

/**
 * perfect_recursive - recursive helper function
 * to check if a binary tree is perfect
 * @tree: pointer to the current node
 * @height: height of the binary tree
 * @level: current level of the node
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int perfect_recursive(const binary_tree_t *tree, size_t height, size_t level)
{
	/* Transverse the tree again, make sure all non-leaf node has 2children */
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (level == height + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (perfect_recursive(tree->left, height, level + 1) &&
		perfect_recursive(tree->right, height, level + 1));
}
