#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node as the right child of a parent
 * @parent: pointer to the parent node
 * @value: value to store in the new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	new_node = malloc(sizeof(binary_tree_t));

	if (!parent || !new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	temp = parent->right;
	parent->right = new_node;

	if (temp)
	{
		temp->parent = new_node;
		new_node->right = temp;
	}

	return (new_node);
}
