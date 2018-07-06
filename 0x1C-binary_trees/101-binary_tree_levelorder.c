#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * levelorder - recursively perform a function on a binary tree
 * in order to traverse it using level order
 * @tree: tree
 * @i: index of level
 * @func: function to perform
 */

void levelorder(const binary_tree_t *tree, size_t i, void(*func)(int))
{
	if (i == 1)
		func(tree->n);
	else if (i > 1)
	{
		levelorder(tree->left, i - 1, func);
		levelorder(tree->right, i - 1, func);
	}
	else
		return;
}

/**
 * binary_tree_levelorder - go through binary tree using level-order traversal
 * @tree: root node of tree
 * @func: pointer to function to call on node
 *
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i, height;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);
	for (i = 0; i <= height + 1; i++)
		levelorder(tree, i, func);
}
