#include "binary_trees.h"
/**
 * binary_tree_sibling - return the sibling of the node
 * @node: pointer to the node
 * Return: sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->left == node && parent->right != NULL)
		return (parent->right);
	if (parent->right == node && parent->left != NULL)
		return (parent->left);
	return (NULL);
}
