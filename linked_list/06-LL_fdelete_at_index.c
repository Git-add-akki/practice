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
struct node * deleteatindex(struct node * head,int index)
{
    struct node * p =head;
    struct node * q =head->next;
    for (int i=0;i<index-1;i++)
    {
      p = p->next;
      q = q->next;
    }
    p->next=q->next;
    free(q);
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

  
  printf("linked list before deletion\n");
  listtraversal(head);
  head =(deleteatindex(head,2));
  listtraversal(head);
return 0;
}
