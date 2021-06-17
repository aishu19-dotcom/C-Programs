/*
Question : Write a C program to read temperature in centigrade and display a suitable message according to
temperature state below: 
Temp &lt; 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp &gt;=40 then Its Very Hot
*/

#include <stdio.h>
int main()
{
     int tmp;

    printf("Input days temperature : ");
    scanf("%d",&tmp);
   if(tmp<0)
             printf("Freezing weather.\n");
   else if(tmp<10)
            printf("Very cold weather.\n");
            else if(tmp<20)
                        printf("Cold weather.\n");
                    else if(tmp<30)
                               printf("Normal in temp.\n");
                            else if(tmp<40)
                                         printf("Its Hot.\n");
                                    else
                                           printf("Its very hot.\n");
    return 0;
}
