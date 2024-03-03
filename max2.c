#include <stdio.h>
int max(int,int);
void main()
{
    int a,b,maximum;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    maximum=max(a,b);
    printf("max=%d",maximum);


}
max(int a,int b)
{
    int maximum;
    if(a>b)
        maximum=a;
    else
        maximum=b;

    return maximum;
}
