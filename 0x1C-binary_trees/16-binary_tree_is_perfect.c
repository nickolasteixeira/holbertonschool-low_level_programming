#include "binary_trees.h"
#include "15-binary_tree_is_full.c"
#include "14-binary_tree_balance.c"
/**
 * binary_tree_is_perfect - checks if tree is perfect
 *
 * @tree: node to start the check
 * Return: 0 if not, 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
		return (1);

	return (0);
}
