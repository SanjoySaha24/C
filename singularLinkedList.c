#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *start = NULL;
void create(int n){
struct node *p=start;
p = (struct node*)malloc(sizeof(struct node));
start = p;
 printf("Enter the node 1 :: \n");
 int item;
 scanf("%d",&item);
 p->data=item;
p->next=NULL;
for(int i=2;i<=n;i++)
{
 p->next=(struct node*)malloc(sizeof(struct node)); 
 p=p->next;
 printf("Enter node no. :: %d\n",i);
 int item1;
 scanf("%d",&item1);
 p->data=item1;
 p->next=NULL;
}
}
void display(){
struct node *p=start;
if(p==NULL){
printf("The linked list is empty\n");
return ;
}else{
while(p!=NULL){
printf(" %d ->",p->data);
p=p->next;
}
printf("NULL");
}
}
void insert_beginning(){
int item;
printf("\nEnter the node to be inserted at the beginnning :: ");
scanf("%d",&item);
struct node *p=start;
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node));
temp->data=item;
temp->next=p;
start = temp;
}
void insert_end()
{
struct node *p=start;
int item;
printf("\nEnter the item to be inserted at end :: ");
scanf("%d",&item);
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=item;
temp->next=NULL;
if(p==NULL){
start=temp;
}else{
while(p->next!=NULL){
p=p->next;
}p->next=temp;
}
}
void insert_btw(int n)
{
struct node*p=start;
struct node*temp;
printf("\nEnter the element to be inserted in between: ");
int d;
scanf("%d",&d);
temp=(struct node*)malloc(sizeof(struct node));
temp->data=d;
while(p->data!=n){
p=p->next;
}
struct node *temp2=p->next;
p->next=temp;
temp->next=temp2;
}
void count(){
struct node*p=start;
int c=0;
if(p==NULL){
printf("\nEmpty linked list\n");
}else{
while(p!=NULL){
p=p->next;
c++;
}
}
printf("\nThe no. of the list : %d",c);
}
void delete_beg(){
struct node *p=start;
p=p->next;
start=p;
 
}
void delete_last(){
struct node*p =start;
while(p->next!=NULL){
p=p->next;
}
struct node *temp=p;
struct node*p1=start;
while(p1->next!=temp){
p1=p1->next;
}
p1->next=NULL;
}
void delete_btw(int n){
struct node*p=start;
while(p->data!=n){
p=p->next;
}
struct node*temp=p;
struct node*p1=start;
while(p1->next!=temp){
p1=p1->next;
}
p1->next=temp->next;
}
void insert_pos(int pos,int item){
struct node*p=start;
if(pos==1){
insert_beginning();
return;
}
else{
int i=0;
while(i!=pos-2){
p=p->next;
i++;
}
struct node*temp2=p->next;
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=item;
p->next=temp;
temp->next=temp2;}
}
void reverse(){
struct node *p=start;
struct node *nexttemp,*prev;
prev=NULL;
while(p!=NULL){
nexttemp=p->next;
p->next=prev;
prev=p;
p=nexttemp;
}
start=prev;
}
int main(){
int n;
printf("Enter the no. of nodes u want to create:: \n");
scanf("%d",&n);
 create(n);
 int ch;
 while(1){
     printf("Enter 1 to insert at beginning\nEnter 2 to insert at end\nEnter 3 to insert in between at a given position\nEnter 4 to insert in between after a given node\nEnter 5 to count the number of the list\nEnter 6 to delete a node with a given value\nEnter 7 to delete first node\nEnter 8 to delete last node\nEnter 9 to reverse the list\nEnter 10 to display the list\nEnter 11 to exit\n\n");


printf("\nEnter Your choice :: ");
scanf("%d",&ch);
switch(ch){
case 1:
 insert_beginning();
break;
case 2:
insert_end();
break;
case 3:
printf("\nEnter the position you want to enter the new node and the node :: ");
int pos,d;
scanf("%d%d",&pos,&d);
insert_pos(pos,d);
break;
case 4:
printf("\nEnter the node after which you want to enter the new node ");
int item;
scanf("%d",&item);
insert_btw(item);
break;
case 5:
count();
break;
case 6:
printf("\nEnter the node value to be deleted :: ");
int d1;
scanf("%d",&d1);
delete_btw(d1);
break;
case 7:
delete_beg();
break;
case 8:
delete_last();
break;
case 9:
reverse();
 break;
 case 10:
display();
break;
case 11:
exit(0);
}
}
}