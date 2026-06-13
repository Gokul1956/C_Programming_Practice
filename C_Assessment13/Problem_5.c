#include<stdio.h>
#include<stdlib.h>

struct student
{
    struct student *prev;

    int id;
    int maths;
    int science;

    struct student *next;
};

int main()
{
    struct student *head;
    struct student *n1,*n2,*n3,*n4,*n5;
    struct student *temp,*curr,*newNode;

    int choice;
    int targetId;
    int deleteId;

    /* Create 5 Nodes */

    n1=(struct student*)malloc(sizeof(struct student));
    n2=(struct student*)malloc(sizeof(struct student));
    n3=(struct student*)malloc(sizeof(struct student));
    n4=(struct student*)malloc(sizeof(struct student));
    n5=(struct student*)malloc(sizeof(struct student));

    n1->id=101;
    n2->id=102;
    n3->id=103;
    n4->id=104;
    n5->id=105;

    head=n1;

    n1->prev=NULL;
    n1->next=n2;

    n2->prev=n1;
    n2->next=n3;

    n3->prev=n2;
    n3->next=n4;

    n4->prev=n3;
    n4->next=n5;

    n5->prev=n4;
    n5->next=NULL;

    while(1)
    {
        printf("\n1.Insert Entry");
        printf("\n2.Delete Entry");
        printf("\n3.Display List");
        printf("\n4.Exit");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        if(choice==1)
        {
            newNode=(struct student*)malloc(sizeof(struct student));

            printf("Enter New ID : ");
            scanf("%d",&newNode->id);

            printf("Insert After Which ID : ");
            scanf("%d",&targetId);

            temp=head;

            while(temp!=NULL)
            {
                if(temp->id==targetId)
                {
                    newNode->next=temp->next;
                    newNode->prev=temp;

                    if(temp->next!=NULL)
                    {
                        temp->next->prev=newNode;
                    }

                    temp->next=newNode;

                    printf("Inserted Successfully\n");
                    break;
                }

                temp=temp->next;
            }

            if(temp==NULL)
            {
                printf("ID Not Found\n");
            }
        }

        else if(choice==2)
        {
            printf("Enter ID To Delete : ");
            scanf("%d",&deleteId);

            curr=head;

            while(curr!=NULL)
            {
                if(curr->id==deleteId)
                {
                    if(curr==head)
                    {
                        head=curr->next;

                        if(head!=NULL)
                        {
                            head->prev=NULL;
                        }
                    }
                    else
                    {
                        curr->prev->next=curr->next;

                        if(curr->next!=NULL)
                        {
                            curr->next->prev=curr->prev;
                        }
                    }

                    free(curr);

                    printf("Deleted Successfully\n");
                    break;
                }

                curr=curr->next;
            }

            if(curr==NULL)
            {
                printf("ID Not Found\n");
            }
        }

        else if(choice==3)
        {
            temp=head;

            printf("\n");

            while(temp!=NULL)
            {
                printf("%d <-> ",temp->id);
                temp=temp->next;
            }

            printf("NULL\n");
        }

        else if(choice==4)
        {
            break;
        }

        else
        {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}