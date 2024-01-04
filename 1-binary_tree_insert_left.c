#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_tree = binary_tree_node(parent, value);
	if (new_tree == NULL)
	{
		return (NULL);
	}
	new_tree->n = value;
	new_tree->parent = parent;
	new_tree->right = NULL;
	new_tree->left = parent->left;
	new_tree->left->parent = new_tree;
	parent->left-> = new_tree;

	return (new_tree);
}
