#include "binary_trees.h"
/**
 * binary_tree_size - return the size the binary tree
 * @tree: pointer to the root
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;
	size_t size = 0;

	if (tree == NULL)
		return (0);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	size = left_size + right_size + 1;
	return (size);
}
/**
 * binary_tree_height - postorder the binary tree
 * @tree: pointer to the root
 * Return: Nothing
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
		return (left_height);
	return (right_height);
}
/**
 * binary_tree_is_full - return 1 if the tree is full
 * @tree: pointer to the root
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t size = binary_tree_size(tree);
	int total_nodes = (int)pow(2, height + 1) - 1;

	if (total_nodes == size)
		return (1);
	return (0);
}
