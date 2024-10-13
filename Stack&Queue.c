// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define size 10
int Top = -1,Front = -1 ,Rear = -1;

int Queue[size];
int Stack[size];

void push () {
    int ele;
    scanf("%d", &ele);
    if(Top == size - 1)
    printf("OVERFLOW\n");
    else{
        Top++;
        Stack[Top] = ele;
    }
}

void pop () {
    if(Top == -1)
    printf("UNDERFLOW\n");
    else{
        printf("%d deleted\n", Stack[Top]);
        Top--;
    }
}

void stackDisplay() {
    if(Top == -1 )
    printf("Nothing to display\n");
    else {
        for(int i = Top; i >= 0; i--){
            printf("%d\n", Stack[i]);
        }
    }
}

void enQueue (){
    int ele;
    scanf("%d", &ele);
    if(Rear == size - 1){
        printf("OVERFLOW\n");
    }
    else{
        if(Front == -1)
        Front = 0;
        Rear++;
        Queue[Rear] = ele;
    }
}

void deQueue (){
    if(Front == -1 || Front > Rear){
        printf("UNDERFLOW\n");
    }
    else{
        printf("%d deleted\n", Queue[Front]);
        Front++;
    }
}

void displayQueue () {
    if(Front == -1 || Front > Rear)
    printf("Empty Queue\n");
    else{
        for(int i = Front; i <= Rear; i++){
            printf("%d\n", Queue[i]);
        }
    }
}