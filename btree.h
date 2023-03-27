#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left, *right;
};

struct node *create(struct node *root, int x)
{
    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->data = x;
        root->left = root->right = NULL;
        return (root);
    }
    else if (x < root->data)
    {
        root->left = create(root->left, x);
    }
    else
    {
        root->right = create(root->right, x);
        return (root);
    }
}

// insert function
struct node *insert(struct node *root, int key)
{
    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        return (root);
    }
    if (key < root->data)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
        return (root);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d \t", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d", root->data);
    }
}

void inorder(struct node *root)
{
    if (root != NULL)
    {   
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}

struct node *searchBST(struct node *root, int data)
{
    if (root == NULL)
    {
        return (NULL);
    }
    if (root->data == data)
    {
        return (root);
    }
    else if (data < root->data)
    {
        return (searchBST(root->left, data));
    }
    else
    {
        return (searchBST(root->right, data));
    }
}