#include "binary_trees.h"
/**
 * binary_tree_nodes - return the number of nodes the binary tree
 * @tree: pointer to the root
 * Return: the size
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		size = 1;
	if (tree->left != NULL)
		size += binary_tree_nodes(tree->left);

	if (tree->right != NULL)
		size += binary_tree_nodes(tree->right);
	return (size);
}
