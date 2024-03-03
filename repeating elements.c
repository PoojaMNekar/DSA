#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void read(int[],int);

void duplicate(int[],int);


int main() {

    int n;
    int a[100];
    scanf("%d",&n);
    read(a,n);
    duplicate(a,n);



}
void read(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void duplicate(int a[],int n)
{
    int i,j,p,x;

    for(i=0;i<n;i++)
    {
        //int p=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                p=a[j];
                break;


            }

        }






    }
     printf("%d",p);



}
