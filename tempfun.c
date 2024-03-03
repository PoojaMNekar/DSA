#include <stdio.h>
float calcbonus(float,int,char);
int main()
{
    float basic,total;
    int exp;
    char category;
    float B;
    printf("enter basic salary,exp,category");
    scanf(" %c%f%d",&category,&basic,&exp);
    if(exp<5)
    {
        printf("invalid");
        exit(0);

    }
    B=calcbonus(basic,exp,category);
    printf("Total salary=%f",B);
    return 0;



}
float calcbonus(float basic,int exp,char category)
{

    float total;
    switch (category)
    {
    case 'm':
        if(5<exp<7)
        {
            total=basic+0.1*basic;

        }
        else if (8<exp<10)
        {
            total=basic+0.2*basic;
        }
        else if(exp>=10)
        {
            total=basic+0.3*basic;
        }
        break;
        case 'e':
        if(5<exp<7)
        {
            total=basic+0.1*basic;

        }
        else if (8<exp<10)
        {
            total=basic+0.2*basic;
        }
        else if(exp>=10)
        {
            total=basic+0.3*basic;
        }
        break;
        case 'o':
        if(5<exp<7)
        {
            total=basic+0.1*basic;

        }
        else if (8<exp<10)
        {
            total=basic+0.2*basic;
        }
        else if(exp>=10)
        {
            total=basic+0.3*basic;
        }
        default:printf("invalid");


    }
    return total;



}
