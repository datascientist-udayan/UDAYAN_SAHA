#include<stdio.h>
#include<conio.h>
int stk[10];
void push(int);
int pop();
int top= -1;
int main()
{
    int arr[10],i,n,val;
    printf("Enter the number of the element in the array:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        push(arr[i]);
    for(i=0;i<n;i++)
    {
        val=pop();
        arr[i]=val;
    }
    printf("The reverse array is:\n");
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
    getch();
    return 0;
}
void push(int val)
{
    stk[++top]=val;
}
int pop(void)
{
    return(stk[top--]);
}
