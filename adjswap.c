#include <stdio.h>
void read(int[],int);
void print(int[],int);
void adjswap(int[],int);
main()
{
    int n,roll[100];
    printf("enter even no of students");
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("invalid");
        exit(0);
    }
    read(roll,n);
    print(roll,n);
    adjswap(roll,n);

    print(roll,n);


}

void read(int roll[],int n)
{
    printf("enter array values");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&roll[i]);
    }
}
void print(int roll[],int n)
{
    printf(" array values:");
    int i;
    for(i=0;i<n;i++)

    {
        printf("%d",roll[i]);
    }
}
void adjswap(int roll[],int n)
{
    int i,x;
   /* printf("sorted : ");
     for(i=0;i<n;i++)
    {
        scanf("%d",roll[i]);
    }*/
    for(i=0;i< n-1;i=i+2)
    {
        x=roll[i];
        roll[i]=roll[i+1];
        roll[i+1]=x;



         //printf("%d",roll[i]);



    }


}

