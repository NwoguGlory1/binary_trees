#include "binary_trees.h"

/**
* binary_tree_is_root- checks if node is root
*
* @node: the node
*
* Return: (1) if is root, (0) otherwise
*/

int binary_tree_is_root(const binary_tree_t *node)
{
    if (!node->parent)
    {
        return (1);
    }
    return (0);
}