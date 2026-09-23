#include <stdio.h>
#include <stdlib.h>

struct node 
{
 int item;
 struct node *next;
};
struct node* head = NULL ;
int isEmpty(){
  if(head == NULL){
    return 1;
  }
  else 
  return 0;
}
int isFull(){
  struct node *n = (struct node*)malloc (sizeof(struct node ));
  if(n==NULL)
  return 1;
  else 
  return 0;
}
struct node * push ( int data ){
  struct node* ptr = (struct node*)malloc(sizeof(struct node));
  if(ptr == NULL){
    printf("Stack overfolw ");
  }
  else{
    ptr->item = data;
    ptr->next = head;
    head = ptr;
  } 
  return head ;
}
int  pop (){
  if(isEmpty()){
    printf("stack Underflow \n");
  }
  else {
      struct node *n = (struct node*)malloc (sizeof(struct node ));
    n = head;
    head = head->next;
    int x = n->item;
    free(n);
  return x ;
  }
}
int peek (int pos){
  struct node *ptr = head ;
  for(int i=0;(i<pos-1 && ptr!= NULL);i++){
    ptr = ptr->next;
  }
if(ptr !=NULL)
return ptr->item;
else 
return -1;
}

int stackTop(){
  return head->item;
}
int stackBottom(){
  struct node *ptr = head ;
  for(int i=0; ptr->next!= NULL;i++){
    ptr = ptr->next;
  }
  return ptr->item;
}
void linkedListTraversal(struct node * ptr){
  
  while (ptr!= NULL)
  {
  printf("Element :  %d\n" ,ptr->item);
  ptr= ptr->next;
  }
  
}
int main(){
  
    int reslut = pop();

   push (56);
     push (7);
    push (9);
    push (5);
    push (1);
    push (4);
   
    linkedListTraversal(head);
    int element = pop();
    printf("Pooped element is %d \n", element);
    linkedListTraversal(head);
    for(int i=1; i<=4;i++){
      printf ("%d\n" ,peek(i));
    }
     printf ("%d\n" ,stackTop());
     printf ("%d\n" ,stackBottom());

    
} 

