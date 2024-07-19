#include<stdio.h>
#include<math.h>  
 int main()    
{    
int n; 
int r;
int sum=0;
int temp;    

printf("Enter the number = ");    
scanf("%d",&n);    
temp=n; 

while(n>0){

r=n%10;    
sum=sum+pow(r,4);    
n=n/10;    
} 

if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   
