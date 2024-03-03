#include <stdio.h>
void main()
{



char type;float amt;int units;
    scanf(" %c%d",&type,&units);
    switch(type)
    {
            case'A':
            amt=(units*25)+1;
            break;
             case'K':
            amt=(units*30)+1;
            break;
             case'S':
            amt=(units*50)+1;
            break;
             case'M':
            amt=(units*45)+1;
            break;
             case'O':
            amt=(units*60)+1;
            break;
             case'W':
            amt=(units*40)+1;
            break;
            defaut:printf("Invalid quantity");

    }
    printf("%f",amt);}
