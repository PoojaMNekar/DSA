#include <stdlib.h>

int main() {
    char type;float pa,disc,total;

    scanf(" %c%f",&type,&pa);

    switch(type)
    {
        case 'M':

                if(pa>1&&pa<=100)
                {
                disc=0;
                    total=pa-disc;
                }
                else if(pa>101&&pa<=500)
                {
                    disc=0.1*pa;
                    total=pa-disc;
                }
                else if(pa>500)
                {
                    disc=0.2*pa;
                    total=pa-disc;
                }
                if(pa<10)
                    printf("invalid");

            break;
        case 'P':

            if(pa>1 && pa<=500)
                {
                disc=0;
                total=pa-disc;
                }
                else if(pa>501&&pa<=1001)
                {
                    disc=0.15*pa;
                    total=pa-disc;
                }
                else if(pa>1001)
                {
                    disc=0.25*pa;
                    total=pa-disc;
                }
                 if(pa<10)
                    printf("invalid");


            break;
             case 'B':

                if(pa>1&&pa<=100)
                {
                disc=0.03*pa;
                    total=pa-disc;
                }
                else if(pa>101&&pa<=500)
                {
                    disc=0.08*pa;
                    total=pa-disc;
                }
                else if(pa>500)
                {
                    disc=0.12*pa;
                    total=pa-disc;
                }
                 if(pa<50)
                    printf("invalid");
                break;
                 default:printf("invalid");
                break;




    }





            printf("total =%f",total);
    return 0;
}

