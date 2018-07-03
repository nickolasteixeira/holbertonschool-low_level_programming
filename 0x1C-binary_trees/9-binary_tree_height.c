#include "binary_trees.h"
/**
 * binary_tree_height - finds the max height of the binary tree
 *
 * @tree: the root of the tree
 * Return: size_t size of max height eight left or right
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t lheight, rheight;

	if (tree == NULL)
		return (-1);

	lheight = binary_tree_height(tree->left) + 1;
	rheight = binary_tree_height(tree->right) + 1;

	if (lheight > rheight)
		return (lheight);
	else
		return (rheight);
}
