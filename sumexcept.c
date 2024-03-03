#include <stdio.h>
void read(int[],int);
void print(int[],int);
void sumexcept(int[],int);
main()
{
    int n,a[100];
    printf("enter n");
    scanf("%d",&n);
    read(a,n);

    sumexcept(a,n);


}
void read(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
void sumexcept(int a[],int n)
{
    int p;
    printf("enter p");
    scanf("%d",&p);
    int i,sum=0,sum1=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    a[i]=sum-a[p];
    printf("%d",a[i]);
}
