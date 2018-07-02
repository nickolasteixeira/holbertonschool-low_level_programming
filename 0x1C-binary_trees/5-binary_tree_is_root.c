#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is the root
 *
 * @node: node to check
 *
 * Return: 1 if root, 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!(node->parent))
		return (1);
	return (0);
}
