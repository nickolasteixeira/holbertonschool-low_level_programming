#include "binary_trees.h"
/**
 * binary_tree_sibling - returns the sibiling pointer
 *
 * @node: node to start the search from
 * Return: pointer of the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);
	else if (node->parent->left == node)
		return (node->parent->right);
	else
		return (NULL);
}
