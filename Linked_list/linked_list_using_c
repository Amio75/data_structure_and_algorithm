#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};

struct Node *insert_last(struct Node *node)
{
    printf("Enter the value: ");
    int data;
    struct Node *curnode = (struct Node *)malloc(sizeof(struct Node));
    node->next = curnode;
    scanf("%d", &curnode->val);
    curnode->next = NULL;
    return curnode;
}

void trav(struct Node *node)
{
    while (node->next)
    {
        node = node->next;
        printf("%d ", node->val);
    }
    printf("\n");
}

struct Node *deletion(struct Node *node)
{
    printf("Enter position: ");
    int index;
    scanf("%d", &index);
    int i = 0;
    struct Node *temp, *curNode;
    while (node)
    {
        if (i == index - 1)
        {
            temp = node->next;
            node->next = temp->next;
            free(temp);
        }
        if (node->next == NULL)
            curNode = node;
        node = node->next;
        i++;
    }

    return curNode;
}

int main()
{
    struct Node *head, *curNode;
    head = curNode = (struct Node *)malloc(sizeof(struct Node));
    head->next = NULL;
    while (1)
    {

        printf("1.insert\n2.trav\n3.del\n4[+].Exit\nEnter option: ");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            curNode = insert_last(curNode);
            break;
        case 2:
            trav(head);
            break;
        case 3:
            curNode = deletion(head);
            break;
        default:
            return 0;
        }
    }
}
