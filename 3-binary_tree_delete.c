#include "binary_trees.h"
/**
 * binary_tree_delete - delete the binary tree
 * @tree: pointer to the root node
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	else
		free(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	else
		free(tree->right);
	free(tree);
}
