#include "binary_trees.h"
/**
 * binary_tree_height - return the height for the binary tree
 * @tree: pointer to the root
 * Return: the size
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0, max_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (max_height);
	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);
	if (left_height > right_height)
		max_height = left_height;
	else
		max_height = right_height;
	return (max_height);
}
/**
 * binary_tree_balance - return the balance for the binary tree
 * @tree: pointer to the root
 * Return: the size
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0, max_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (max_height);
	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);
	return (left_height - right_height);
}
