#include "binary_trees.h"
/**
 * binary_tree_inorder - preorder the binary tree
 * @tree: pointer to the root
 * @func: pointer to a function
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left == NULL && tree->right == NULL)
		func(tree->n);
	else
	{
		if (tree->left != NULL)
		{
			binary_tree_inorder(tree->left, func);
			func(tree->n);
		}
		if (tree->right != NULL)
		{
			binary_tree_inorder(tree->right, func);
		}
	}
}
