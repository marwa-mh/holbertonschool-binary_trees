#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer to a parent node
 * @value: the node value
 * Return: a pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = value;
	tmp->left = NULL;
	tmp->right = NULL;
	tmp->parent = parent;
	return (tmp);
}
