#include "binary_trees.h"
/**
 * binary_tree_leaves - return the number of leaves the binary tree
 * @tree: pointer to the root
 * Return: the size
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		leaf += binary_tree_leaves(tree->left);
	else
		return (1);
	if (tree->right != NULL)
		leaf += binary_tree_leaves(tree->right);
	else
		return (1);
	return (leaf);
}
