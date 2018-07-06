#include "binary_trees.h"
#include "11-binary_tree_size.c"

/**
 * is_complete - recursively checks if binary tree is complete
 * @tree: tree
 * @index: starting index
 * @size: size of tree
 *
 * Return: 1 if complete, 0 otherwise
 */

int is_complete(const binary_tree_t *tree, size_t index, size_t size)
{
	if (tree == NULL)
		return (1);

	if (index >= size)
		return (0);

	return (is_complete(tree->left, 2 * index + 1, size) &&
	       is_complete(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: tree
 *
 * Return: 1 if complete, 0 otherwise
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	return (is_complete(tree, 0, size));
}
