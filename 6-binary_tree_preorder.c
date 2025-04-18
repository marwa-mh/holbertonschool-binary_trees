#include "binary_trees.h"
/**
 * binary_tree_preorder - preorder the binary tree
 * @tree: pointer to the rote
 * @func: pointer to a function
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
