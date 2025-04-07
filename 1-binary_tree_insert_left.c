#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node to the left
 * @parent: pointer to a parent node
 * @value: the node value
 * Return: a pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmpNode;

	if (parent == NULL)
		return (NULL);
	tmpNode = malloc(sizeof(binary_tree_t));
	if (tmpNode == NULL)
		return (NULL);
	tmpNode->n = value;
	tmpNode->left = NULL;
	tmpNode->right = NULL;
	if (parent->left != NULL)
	{
		tmpNode->left = parent->left;
	}
	parent->left = tmpNode;
	return (tmpNode);
}
