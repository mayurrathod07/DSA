#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "btree.h"
void main()
{
    struct node *root, *temp;
    int val, count, ch;
    root = NULL;
    //     printf("Insert The Value in tree\n");
    //     scanf("%d",&val);
    //     root=create(root,val);

    //    // root=create(root,val);
    while (1)
    {
        printf("\n**********BST Operations*************\n");
        printf("1)Create BST\n");
        printf("2)Insert Elemnet In Tree\n");
        printf("3)Search Element In Tree\n");
        printf("4)preorder Travesal\n");
        printf("5)postorder Travesal\n");
        printf("6)inorder Travesal\n");
        printf("7)Exit\n");
        printf("Enter Your Choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            while (1)
            {
                printf("Enter the data\n");
                scanf("%d", &val);
                if (val == 0)
                {
                    break;
                }
                else
                {
                    root = create(root, val);
                }
            }

            break;
        case 2:
            printf("Enter data in tree\n");
            scanf("%d", &val);
            root = insert(root, val);
            break;

        case 3:
            printf("\nEnter Data To be search \n");
            scanf("%d", &val);
            temp = searchBST(root, val);
            if (temp == NULL)
            {
                printf("%d NOt Found\n", val);
            }
            else
            {
                printf("%d data found\n",val);
            }
            break;
        case 4:
            preorder(root);
            break;
        case 5:
            postorder(root);
            break;
        case 6:
            inorder(root);
            break;
        case 7:
            exit(0);
        default:
            printf("Enter Valid Choice\n");
        }
    }
}