#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct List{
    struct Node* head;
};

//init
void initLL(struct List* list){
    list->head = NULL;
}
//insert at end
void insertEnd(struct List* list , int val){
    if(list->head == NULL){
        struct Node* temp = malloc(sizeof(struct Node));
        temp->data = val;
        temp->next = NULL;
        list->head = temp;
    }
    else{
        struct Node* temp = malloc(sizeof(struct Node));
        temp->data = val;
        temp->next = NULL;
        struct Node* mover = list->head;
        while(mover->next != NULL) mover = mover->next;
        mover->next = temp;
    }
}
//insert at start
void insertStart(struct List* list , int val){
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = list->head;
    list->head = temp;
}
//delete end
void deleteEnd(struct List* list){
    //if head is null
    if(list->head == NULL) return;
    //if only one elem
    if(list->head->next == NULL){
        struct Node* temp = list->head;
        free(temp);
        list->head = NULL;
        return;
    }
    //else
    struct Node* mover = list->head;
    while(mover->next->next) mover = mover->next;
    struct Node* temp = mover->next;
    free(temp);
    mover->next = NULL;
}
//delete start
void deleteStart(struct List* list){
    //if head is null
    if(list->head == NULL) return;
    //if only one elem
    if(list->head->next == NULL){
        struct Node* temp = list->head;
        free(temp);
        list->head = NULL;
        return;
    }
    //else
    struct Node* temp = list->head;
    list->head = list->head->next;
    free(temp);
}
//display all elements
void display(struct List* list){
    struct Node* temp = list->head;
    while(temp){
        printf("%d " , temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    struct List L;
    initLL(&L);
}