//STACK USING ARRAY
#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;
void push(int value) {
if (top == SIZE - 1) {
printf("Stack Overflow!\n");
} else {
stack[++top] = value;
printf("%d pushed into stack\n", value);
}
}
void pop() {
if (top == -1) {
printf("Stack Underflow!\n");
} else {
printf("%d popped from stack\n", stack[top--]);
}
}
void display() {
if (top == -1) {
printf("Stack is empty\n");
return;
}
printf("Stack elements: ");
for (int i = top; i >= 0; i--) {
printf("%d ", stack[i]);
}
printf("\n");
}
int main() {
push(10);
push(20);
push(30);
display();
pop();
display();
return 0;
}

//QUEUE USING ARRAY
#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;
void enqueue(int value) {
if (rear == SIZE - 1) {
printf("Queue Overflow!\n");
} else {
if (front == -1)
front = 0;

queue[++rear] = value;
printf("%d inserted into queue\n", value);
}
}
void dequeue() {
if (front == -1 || front > rear) {
printf("Queue Underflow!\n");
} else {
printf("%d deleted from queue\n", queue[front++]);
if (front > rear)
front = rear = -1;
}
}
void display() {
if (front == -1) {
printf("Queue is empty\n");
return;
}
printf("Queue elements: ");
for (int i = front; i <= rear; i++) {

printf("%d ", queue[i]);
}
printf("\n");
}
int main() {
enqueue(10);
enqueue(20);
enqueue(30);
display();
dequeue();
display();
return 0;
}
