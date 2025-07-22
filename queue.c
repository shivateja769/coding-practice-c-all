#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
};


struct node *front=NULL,*rear=NULL;

void enqueue(int val){

struct node *temp=(struct node*)malloc(sizeof(struct node));

  temp->data=val;
  temp->next=NULL;
  
  if(rear==NULL){
  
  front=rear=temp;
  }
  
  else{
  
  rear->next=temp;
  rear=temp;
  
  }

}

void dequeue(){


  if(front==NULL){
  
  printf("queue is empty");
  }
  
  struct node *temp=front;
  
  front=front->next;
  
  if(front==NULL){
  
    rear=NULL;
  
  }
  free(temp);
}


void display(){

if(front==NULL){

printf("queue is empty");
}

struct node *t1=front;

while(t1!=NULL){

printf("%d ",t1->data);
t1=t1->next;
}

}

int main(){

int ch,val;

while(1){

printf("Enter choice:");
scanf("%d",&ch);

switch(ch){

case 1:
printf("Enter value:");
scanf("%d",&val);
enqueue(val);
break;

case 2:
display();
break;

case 3:
dequeue();
break;

}




}




}
