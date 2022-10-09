#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void listtraversal(struct node *ptr)
{
    while(ptr!=NULL){
    printf("element %d\n",ptr->data);
    ptr=ptr->next;
}
}
struct node * insertatindex(struct node *head,int data,int index)
{
    struct node *ptr =(struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
int main()
{
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *fourth;
//   allocate memory for nodes in the linked list in heap
  head   = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third  = (struct node *)malloc(sizeof(struct node));
  fourth = (struct node *)malloc(sizeof(struct node));

//   link first and second nodes
  head->data =11;
  head->next =second;
//   link second and third nodes
  second->data =32;
  second->next =third;
//   link third and fourth nodes
  third->data =48;
  third->next =fourth;
//   link fourth and null nodes
  fourth->data =456;
  fourth->next =NULL;

  printf("linked list before insertion\n");
  listtraversal(head);
  head =insertatindex(head,66,1);
  printf("linked list after insertion\n");
  listtraversal(head);
return 0;
}