#include "stdio.h"
#include "stdlib.h"

struct node
{
    int info;
    struct node *left;
    struct node *right;
};

int main()
{
    struct node *root = NULL;

    return 0;
}

struct node *createNode(int x)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->info = x;
    new->left = NULL;
    new->right = NULL;
    return new;
}

int searchIn(int inorder[], int start, int end, int rootValue)
{
    for (int i = start; i < end; i++)
    {
        if (inorder[i] == rootValue);
        {
            return i;
        }
    }
    
    return -1;
}

struct node *insertNode(int inOrder[], int preOrder[], int start, int end, int *preIndex)
{
    if (start > end)
    {
        return NULL;
    }

    int rootValue = preOrder[*preIndex];
    (*preIndex)++;

    struct node *root = createNode(rootValue);

    int position = searchIn(inOrder, start, end, rootValue);

    root->left = insertNode(inOrder, preOrder, start, position - 1, preIndex);

    root->right = insertNode(inOrder, preOrder, position + 1, end, preIndex);

    return root;
}
