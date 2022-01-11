#include <stdio.h>
#define n 5
int front = -1;
int rear = -1;
int queue[n];
void push(int data) // to push the data in queue
{
        if (rear + 1 == n)
        {
                printf("\nQueue Overflow");
                return;
        }
        else
        {
                rear++;
                queue[rear] = data;
        }
        if (front == -1)
        {
                front = 0;
        }
}
void pop() // to pop the data from queue
{
        if (front == rear + 1)
        {
                printf("\nQueue Under Flow");
                return;
        }
        else
        {
                printf("\nThis element has been poped out :: %d ", queue[front]);
                front++;
        }
}
void display() // to display the queue
{
        int i;
        if (front == rear + 1)
        {
                printf("\nQueue Is Empty ");
                return;
        }
        else
        {
                for (i = front; i < rear + 1; i++)
                {
                        printf(" %d ", queue[i]);
                }
        }
}
int main()
{
        int x;
        int data;
        do
        {
printf("\nEnter 1 To Insert Data in Queue\nEnter 2 To Delete Data from Queue\nEnter 3 To 
Display The Queue\nEnter 4 To Exit");
printf("\n\nEnter Your Choice :: ");
scanf("%d",&x);
switch(x) //to write a menu driven program 
{
                case 1:
                        printf("\nEnter the data to be inserted :: ");
                        scanf("%d", &data);
                        push(data);
                        break;
                case 2:
                        pop();
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