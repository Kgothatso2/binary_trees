#include "binary_trees.h"
int binary_tree_is_left(const binary_tree_t *node)
{
    if (node == NULL || node->left != NULL || node->right != NULL)
    {
        return(0);
    }
    return (1);
}