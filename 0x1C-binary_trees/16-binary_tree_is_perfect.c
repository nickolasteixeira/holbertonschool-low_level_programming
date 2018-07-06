#include "binary_trees.h"
#include "15-binary_tree_is_full.c"
#include "14-binary_tree_balance.c"

/**
 * check_level - checks if leaves are at same level
 * @tree: tree to check
 * @current: current level
 * @original: original level
 *
 * Return: 1 if true, 0 otherwise
 */

int check_level(const binary_tree_t *tree, int current, int original)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
	{
		if (original == 0)
		{
			original = current;
			return (1);
		}
		return (original == current);
	}

	return (check_level(tree->left, current + 1, original) &&
		check_level(tree->right, current + 1, original));
}

/**
 * binary_tree_is_perfect - checks if tree is perfect
 *
 * @tree: node to start the check
 * Return: 0 if not, 1 if perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int level = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
		return (check_level(tree, 0, level));

	return (0);
}
