#include "binary_trees.h"
/**
 * find_balance - finds the difference between the left and right nodes
 * from the tree
 *
 * @tree: tree trunk to start from
 * Return: height of each branch
 */
int find_balance(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (tree == NULL)
		return (-1);

	lheight = find_balance(tree->left) + 1;
	rheight = find_balance(tree->right) + 1;

	if (lheight > rheight)
		return (lheight);
	else
		return (rheight);
}
/**
 * binary_tree_balance - function that measures the balance of a btree
 *
 * @tree: node to start measuring
 *
 * Return: balance of a tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = find_balance(tree->left);
	right = find_balance(tree->right);

	return (left - right);
}
