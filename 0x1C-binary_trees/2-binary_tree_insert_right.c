#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node to the left, if not null, replaces
 * the child and puts the child below it
 *
 * @parent: parent node
 * @value: value to add to node
 *
 * Return: pointer to node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;

	if (parent->right)
	{
		node->right = parent->right;
		node->parent = parent;
		parent->right->parent = node;
		parent->right = node;
	}
	else
	{
		parent->right = node;
		node->parent = parent;
	}
	return (node);
}
