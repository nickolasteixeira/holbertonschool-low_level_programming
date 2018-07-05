#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node to the left, if not null, replaces
 * the child and puts the child below it
 *
 * @parent: parent node
 * @value: value to add to node
 *
 * Return: pointer to node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;

	if (parent->left)
	{
		node->left = parent->left;
		node->parent = parent;
		parent->left->parent = node;
		parent->left = node;
		node->right = NULL;
	}
	else
	{
		parent->left = node;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
	}
	return (node);
}
