#include<stdio.h>
#include<stdlib.h>
int push(int arr[10],int n)
{
    int top=0;int item;

    while(top<n)
    {
        printf("\n entre the item to be pushed into the stack \n");
        scanf("%d",&item);
        printf("\n ******* \n");

        arr[top]=item;
        printf("%d\n",arr[top]);
        top++;
    }
    return 0;
}
int pop(int arr[10],int n)
{
    int item;
    int top=n-1;
    arr[n];
    printf("\n Items popped are: \n");
    if(top==-1)
    {
        printf("\n Underflown \n");
    }
    else
    {
        while(top>=0)
        {
          item=arr[top];
          printf("%d\n",item);
          top--;
        }

    }

    return 0;
}

int main()
{
    int n;int ch;


    int arr[10];
    while(1)
    {
    printf("\n enter 1 to push an element into the stack and 2 to pop the elements \n");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("\n enter the number of elements to be pushed into the stack \n");
        scanf("%d",&n);
        push(arr,n);

    }
    else if(ch==2)
    {
        pop(arr,n);
    }
    else
    {
        printf("\n wrong choice entered \n");
        break;
    }
  }

    return 0;

}



