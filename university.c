#include <stdio.h>
void read(int[],int);
void print(int[],int);
void university(int[],int);

int main()
 {
    int n;
    int std[100];
    printf("enter n");
    scanf("%d",&n);
    read(std,n);
    print(std,n);
    university(std,n);

    return 0;

}
void read(int std[],int n)
{
    printf("enter array values");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&std[i]);
    }
}
void print(int std[],int n)
{
    printf(" array values:");
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",std[i]);
    }
}
void university(int std[],int n)
{
    int i,x,y;
    printf("even class= \n");
    for(i=0;i<n;i++)
    {
        if(std[i]%2==0)
        {

             printf("%d",std[i]);


        }
    }
    printf("\n odd class is ");
        for(i=0;i<n;i++)
        {
            if(std[i]%2!=0)
            {
                printf(" %d\n",std[i]);
            }
        }






}

