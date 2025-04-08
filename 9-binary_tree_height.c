#include "binary_trees.h"
/**
 * binary_tree_height - postorder the binary tree
 * @tree: pointer to the root
 * Return: Nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (height);

	if (tree->left != NULL)
	{
		height = 1 + binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		height = 1 + binary_tree_height(tree->right);
	}
	return (height);
}
