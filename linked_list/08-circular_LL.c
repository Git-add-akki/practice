#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void listtraversal(struct node *head)
{
    struct node *ptr=head;
    do
    {  
    printf("element %d\n",ptr->data);
    ptr=ptr->next;
    }
    while(ptr!=head);
    
    
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
  fourth->next =head;

  listtraversal(head);
return 0;
}