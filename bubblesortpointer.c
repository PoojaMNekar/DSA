#include <stdio.h>
void sort(int*  ,int );
void read(int* ,int );
void print(int* ,int );
main()
{
    int a[100],n;
    scanf("%d",&n);
    read(a,n);
    print(a,n);
    sort(a,n);
    printf("after bubble sort");
    print(a,n);


}
void read(int *a,int n)
{
    int i;
    printf("enter array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
}
void print(int *a,int n)
{
     int i;

    for(i=0;i<n;i++)
    {
        printf("%d",*(a+i));
    }
}
void sort(int *a,int n)
{
    int i,j,x;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(*(a+j)>*(a+(j+1)))

               {
                   x=*(a+j);
                   *(a+j)=*(a+(j+1));
                   *(a+(j+1))= x;
               }
        }
    }
}


