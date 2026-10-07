#include<stdio.h>

struct Stack{
    int top;
    int arr[100];
};

void init(struct Stack* s){
    s->top = -1;
}

void push(struct Stack* s , int val){
    if(s->top == 99) printf("stack is full");
    else s->arr[++(s->top)] = val;
}

void poop(struct Stack* s){
    if(s->top == -1) printf("stack is empty");
    else s->top--;
}

int peek(struct Stack* s){
    if(s->top == -1) return -1;
    else return s->arr[s->top];
}

int main(){
    struct Stack s;
}
