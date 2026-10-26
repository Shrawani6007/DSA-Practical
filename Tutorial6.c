#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};
struct Node* top=NULL;
void push(int value) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
if (newNode==NULL) {
printf("Stack Overflow!\n");
return;
}
newNode->data=value;
newNode->next=top;
top=newNode;
printf("Pushed %d\n", value);
}
void pop() {
if (top==NULL) {
printf("Stack Underflow! The stack is empty.\n");
return;
}
struct Node* temp=top;
printf("Popped %d\n",top->data);
top=top->next;
free(temp);
}
void display() {
if (top == NULL) {
printf("Stack is empty.\n");
return;
}

struct Node* temp = top;
printf("Stack elements: ");
while (temp != NULL) {
printf("%d ", temp->data);
temp = temp->next;
}
printf("NULL\n");
}
int main() {
push(10);
push(77);
push(100);
display();
pop();
display();
return 0;
}
