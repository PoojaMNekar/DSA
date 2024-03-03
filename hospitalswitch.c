#include <stdio.h>
void main()
{
    char type;int days,charge,calc;
    printf("enter type and days");
    scanf(" %c%d",&type,&days);
    switch(type)
    {
    case 'G':
        {
            if(days<=5)
            {
                charge=days*2000;
            }
            else if(6<=days<=10)
            {
                charge=(5*2000)+((days-5)*4000);
            }
            else if(days>10)
            {
                charge=(5*2000)+(5*4000)+((days-10)*6000);
            }
        }
        break;
        case 'I':
        {
            if(days<=5)
            {
                charge=days*4000;
            }
            else if(6<=days<=10)
            {
                charge=(5*4000)+((days-5)*6000);
            }
            else if(days>10)
            {
                charge=(5*4000)+(5*6000)+((days-10)*8000);
            }
        }
         printf("charge=%d",charge);



    }
}




