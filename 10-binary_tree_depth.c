#include "binary_trees.h"
/**
 * binary_tree_depth - return the depth the binary tree
 * @tree: pointer to the root
 * Return: Nothing
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (depth);
	if (tree->parent != NULL)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
