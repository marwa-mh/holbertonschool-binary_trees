#include "binary_trees.h"
/**
 * binary_tree_uncle - return the uncle of the node
 * @node: pointer to the node
 * Return: uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *g_parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	g_parent = node->parent->parent;
	if (g_parent->left == node->parent && g_parent->right != NULL)
		return (g_parent->right);

	if (g_parent->right == node->parent && g_parent->left != NULL)
		return (g_parent->left);

	return (NULL);
}
