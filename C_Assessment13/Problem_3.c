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
    struct student *head,*n1,*n2,*n3,*n4,*n5;
    struct student *temp,*prev,*curr,*newNode;

    int choice;
    int targetId;
    int deleteId;

    /* Create 5 nodes */

    n1=(struct student*)malloc(sizeof(struct student));
    n2=(struct student*)malloc(sizeof(struct student));
    n3=(struct student*)malloc(sizeof(struct student));
    n4=(struct student*)malloc(sizeof(struct student));
    n5=(struct student*)malloc(sizeof(struct student));

    n1->id=101;
    n1->maths=80;
    n1->science=75;

    n2->id=102;
    n2->maths=85;
    n2->science=70;

    n3->id=103;
    n3->maths=90;
    n3->science=88;

    n4->id=104;
    n4->maths=77;
    n4->science=69;

    n5->id=105;
    n5->maths=92;
    n5->science=95;

    head=n1;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;

    while(1)
    {
        printf("\n1.Insert Entry");
        printf("\n2.Delete Entry");
        printf("\n3.Display List");
        printf("\n4.Exit");

        printf("\n\nEnter Choice : ");
        scanf("%d",&choice);

        if(choice==1)
        {
            newNode=(struct student*)malloc(sizeof(struct student));

            printf("Enter New ID : ");
            scanf("%d",&newNode->id);

            printf("Enter Maths Mark : ");
            scanf("%d",&newNode->maths);

            printf("Enter Science Mark : ");
            scanf("%d",&newNode->science);

            printf("Insert After Which ID : ");
            scanf("%d",&targetId);

            temp=head;

            while(temp!=NULL)
            {
                if(temp->id==targetId)
                {
                    newNode->next=temp->next;
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
            prev=NULL;

            while(curr!=NULL)
            {
                if(curr->id==deleteId)
                {
                    if(prev==NULL)
                    {
                        head=curr->next;
                    }
                    else
                    {
                        prev->next=curr->next;
                    }

                    free(curr);

                    printf("Deleted Successfully\n");
                    break;
                }

                prev=curr;
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

            while(temp!=NULL)
            {
                printf("\nID      : %d",temp->id);
                printf("\nMaths   : %d",temp->maths);
                printf("\nScience : %d\n",temp->science);

                temp=temp->next;
            }
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