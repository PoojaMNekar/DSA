#include <stdio.h>
void read(int[],int);
void print(int[],int);
void reverse(int[],int);

main()
{
    int n,reve[100];
    printf("enter even no of students");
    scanf("%d",&n);
    read(reve,n);
    print(reve,n);
    reverse(reve,n);
    print(reve,n);


}

void read(int reve[],int n)
{
    printf("enter array values");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&reve[i]);
    }
}
void print(int reve[],int n)
{
    printf(" array values:");
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",reve[i]);
    }
}
void reverse (int reve[],int n)
{
    int x,i;
    printf("after reverse ");
    for(i=0;i<n/2;i++)
    {
        x=reve[i];
        reve[i]=reve[n-1-i];
        reve[n-1-i]=x;


        // printf("%d\n",reve[i]);
    }

}
