#include "binary_trees.h"

/**
 * binary_tree_balance -  function that measures the balance factor of a binary
 * tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree)
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		return (left_height - right_height);
	}

	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = 0, right_height = 0;

		left_height = tree->left ? 1 +  binary_tree_height(tree->left) : 1;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((left_height > right_height) ? left_height : right_height);
	}

	return (0);
}
