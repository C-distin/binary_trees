#include "binary_trees.h"

int binary_tree_is_full_rec(const binary_tree_t *tree);

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (binary_tree_is_full_rec(tree));
}

/**
 * binary_tree_is_full_rec - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if full, 0 if not
 */
int binary_tree_is_full_rec(const binary_tree_t *tree)
{
    if (tree != NULL)
    {
        if (tree->left == NULL && tree->right == NULL)
            return (1);
        else if (tree->left != NULL && tree->right != NULL)
            return (binary_tree_is_full_rec(tree->left) &&
                    binary_tree_is_full_rec(tree->right));
        else
            return (0);
    }

    return (1);
}
