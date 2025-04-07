#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node to the right
 * @parent: pointer to a parent node
 * @value: the node value
 * Return: a pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	binary_tree_t *current;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	if (parent->right != NULL)
	{
		current = parent->right;
		current->parent = newNode;
		newNode->right = current;
	}
	parent->right = newNode;
	return (newNode);
}
