#include <stdio.h>
#define n 5
int rear = -1;
int front = -1;
int cq[n];
void insert(int data)
{
    if (front == 0 && rear == n - 1 || front == rear + 1)
    {
        printf("\nCircular Queue OverFlow");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == n - 1)
    {
        rear = 0;
    }
    else
    {

        rear++;
    }
    cq[rear] = data;
}
void cqdelete()
{
    if (front == -1)
    {
        printf("\nCircular Queue Underflow");
        return;
    }
    else
    {
        printf("\nThe Deleted Item Is :: %d ", cq[front]);
    }
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == n - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}
void display()
{
    int i = 0;
    if (front == -1)
    {
        printf("\nCircular Queue Is Empty");
        return;
    }
    else if (rear < front)
    {
        for (i = 0; i <= rear; i++)
        {
            printf(" %d ", cq[i]);
        }
        //for(i=rear+1;i<=front-1;i++)
        //{
        // printf("");
        //1}
        for (i = front; i < n; i++)
        {
            printf(" %d ", cq[i]);
        }
    }
    else
    {
        //for(i=0;i<=front-1;i++)
        //{
        // printf("");
        //}
        for (i = front; i <= rear; i++)
        {
            printf(" %d ", cq[i]);
        }
        //for(i=rear+1;i<n;i++)
        //{
        // printf("");
        //}
    }
}
int main()
{
    int x;
    int data;
    do
    {
printf("\nEnter 1: To Insert Data in the circular queue\nEnter 2: To delete data from the circular 
queue\nEnter 3: To display the elements of circular queue\nEnter 4: To exit");
printf("\nEnter Your Choice :: ");
scanf("%d",&x);
switch(x)
{
        case 1:
            printf("\nEnter the data to be inserted :: ");
            scanf("%d", &data);
            insert(data);
            break;
        case 2:
            cqdelete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
}
    } while (x != 0);
    return 0;
}
