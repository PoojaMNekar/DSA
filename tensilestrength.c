#include <stdio.h>
void calc(float,float,float);
void main()
{
    float h,ts,cc;
    printf("enter h,ts,cc");
    scanf("%f%f%f",&h,&ts,&cc);
    calc(h,ts,cc);


}
void calc(float h,float ts,float cc)
{
    float grade;
    if(h>50&&cc<0.7&&ts>5600)
    grade=10;


    else if(h>50&&cc<0.7)
    {
        grade=10;

    }
    else if(cc<0.7&&ts>5600)
    {

    }
    else if(h>50&&ts>5600)
    {
         printf("grade is 7");
    }
    else if(h>50||cc<0.7||ts>5600)
    {
         printf("grade is 6");
    }
    else
    {
         printf("grade is 5");
    }

}

