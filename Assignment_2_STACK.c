#include <stdio.h>
#include <stdlib.h>
#define size 10

int list [size], start=-1;

void push(int num){
    start++;
    list[start]=num;
}

int pop(){
    int num;
    num= list[start];
    start--;
    return num;
    
}

void peep(){
    int i;
    printf("The stack is: \n");
    for(i=0; i<=start; i++){
        printf("%d\n", list[i]);
    }
}

int main(){
    int c, num, pos;
    while(1){
        printf("Enter 1 to push \n Enter 2 to pop \n Enter 3 to peep \n Enter 4 to pop \n");
        scanf("%d", &c);
    }
}
