#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;
typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* print binary tree */
void binary_tree_print(const binary_tree_t *);

/* create new binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* insert new left child node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* insert new right child node */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* delete entire binary tree */
void binary_tree_delete(binary_tree_t *tree);

#endif /* _BINARY_TREES_H_ */