#include "binary_trees.h"
/**
 * deleteTree - delete a binary tree
 *
 * @tree - the tree leaf to free
 * Return: void
 */
void deleteTree(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	deleteTree(tree->left);
	deleteTree(tree->right);
	free(tree);
}

/**
 * binary_tree_delete - delete a tree
 *
 * @tree: binary tree to delete
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
		deleteTree(tree);
}
