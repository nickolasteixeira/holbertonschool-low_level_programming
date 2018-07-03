#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: node to count leaves from
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter;

	counter = 0;
	if (tree->left)
		counter++;
	if (tree->right)
		counter++;

	return (counter);
}
