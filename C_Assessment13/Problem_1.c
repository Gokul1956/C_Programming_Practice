#include<stdio.h>
#include<stdlib.h>

struct student
{
    int id;
    int maths;
    int science;
    struct student *next;
};

int main()
{
    struct student *head = NULL;
    struct student *newnode;
    struct student *temp;

    int id;

    while(1)
    {
        printf("Enter ID (-1 to stop): ");
        scanf("%d",&id);

        if(id == -1)
        {
            break;
        }

        newnode = (struct student *)malloc(sizeof(struct student));

        newnode->id = id;

        printf("Enter Maths Mark : ");
        scanf("%d",&newnode->maths);

        printf("Enter Science Mark : ");
        scanf("%d",&newnode->science);

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }

    printf("\nStudent Details\n");

    temp = head;

    while(temp != NULL)
    {
        printf("\nID      : %d",temp->id);
        printf("\nMaths   : %d",temp->maths);
        printf("\nScience : %d\n",temp->science);

        temp = temp->next;
    }

    return 0;
}