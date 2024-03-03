#include <stdio.h>
float disc(float);
void main()
{
    float amt,discount,net,netamt;
    printf("enter the amount");
    scanf("%f",&amt);
    netamt=disc(amt);
    printf("net amt=%f",netamt);

}
float disc(float amt)
{
    float discount,net;

    if(0<amt<1000)
    {
        discount=0;

    }
    else if(1001<amt<2000)
    {
        discount=amt*0.25;

    }
    else if(2001<amt<3000)
    {
        discount=amt*0.35;
    }
    else
    {
        discount=amt*0.45;
    }
    net=amt-discount;
    return net;
}
