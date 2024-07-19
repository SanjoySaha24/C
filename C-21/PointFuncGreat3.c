#include <stdio.h>
void grt (int *a, int *b, int *c, int *great){
    if(*a>*b){
        if(a>c)
        *great = *a;
        else
        *great = *c;
    }
    else{
         if(*b>*c)
        
        *great = *b;
        else
        *great = *c;
    }
}
int main(){
int first, second, third;
       int great;
    printf("Enter the no. \n");
    scanf("%d", &first);

    printf("Enter the no. \n");
    scanf("%d", &second);

    printf("Enter the no. \n");
    scanf("%d",&third);
    
    grt(&first,&second,&third,&great);
    
    printf("Greatest number = %d\n",great);
    
    return 0;
}
