#include<stdio.h>
#define MAX 100
struct Queue{
int items[MAX];
int front,rear;
};
void intialize(struct Queue *q){
  q->front =-1;
  q->rear=-1;
}
int isFull(struct Queue *q){
  return q->rear==MAX-1;
}
int isEmpty(struct Queue *q){
  return q->front==-1||q->front>q->rear;
}
void enqueue(struct Queue *q,int value){
  if(isFull(q)){
    printf("Queue is full cannot insert\n",value);
    return;
  }
  if(q->front==-1)
    q->front=0;
  q->rear++;
  q->items[q->rear]=value;
  printf("Inserted %d\n",value);
}
int dequeue(struct Queue *q){
  if(isEmpty(q)){
    printf("Queue is empty cannot delete\n");
    return -1;
  }
  int value=q->items[q->front];
  q->front++;
  if(q->front >q->rear){
    q->front =q->rear=-1;
  }
  return value;
}
void display(struct Queue *q){
  if(isEmpty(q)){
    printf("Queue is empty\n");
    return;
  }
  printf("Queue elements are:\n");
  for(int i=q->front;i<=q->rear;i++){
    printf("%d\n",q->items[i]);
}
  printf("\n");
}
int main(){
struct Queue q;
intialize(&q);
  enqueue(&q,10);
  enqueue(&q,20);
  enqueue(&q,30);
  display(&q);
  printf("Dequeue:%d\n",dequeue(&q));
  printf("Dequeue:%d\n",dequeue(&q));
  display(&q);
  return 0;
}

