#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    int i;
    struct node *head=malloc(sizeof(struct node));
    head->data=89;
    head->link=NULL;
    struct node *current=head;
    struct node *start=head; 
    for(i=2;i<5;i++)
    {
        struct node *head=malloc(sizeof(struct node));
        head->data=56;
        head->link=NULL;
        current->link=head;
        current=current->link;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",current->data);
        printf("%d\n",start->data);
    }
}
