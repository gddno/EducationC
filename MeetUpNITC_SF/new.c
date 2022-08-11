#include<stdio.h>
#include <conio.h>
#include <math.h>

// #define LED_1 0
// #define LED_2 1
// //...
// #define LED_8 7

int sum(int , int , int );

int main(){
    int s = sum(1, 2, 3);
    printf("s=%d\n", s);
    


    // if((x>=5 && x <=8) && (y >= 3 && x <= 7))
    // {
    //     printf("Kick");
    // }
    // else{
    //     printf("No kick");
    // }

    // switch(x)
    // {
    //     case 1: printf("1\n");
    //     break;
    //     case 2: printf("2\n");
    //     break;
    // }
    // switch(y)
    // {
    //     case 1: printf("1\n");
    //     break;
    // }

        /*int a;
        //b10000000
        unsigned char PORT_A = 0x80;
        PORT_A = PORT_A;
        printf("PORT_A = 0x%2.2x\n", PORT_A);
        PORT_A = PORT_A >> 1;
        printf("PORT_A = 0x%2.2x\n", PORT_A);
        PORT_A = PORT_A >> 1;
        printf("PORT_A = 0x%2.2x\n", PORT_A);
        PORT_A = PORT_A >> 1;
        printf("PORT_A = 0x%2.2x\n", PORT_A);
        PORT_A = PORT_A >> 1;
        printf("PORT_A = 0x%2.2x\n", PORT_A);
        PORT_A = PORT_A >> 1;
        printf("PORT_A = 0x%2.2x\n", PORT_A);
        PORT_A = PORT_A >> 1;
        printf("PORT_A = 0x%2.2x\n", PORT_A);
        PORT_A = PORT_A >> 1;
        printf("PORT_A = 0x%2.2x\n", PORT_A);
        PORT_A = PORT_A >> 1;
        printf("PORT_A = 0x%2.2x\n", PORT_A);
    */
    // int a;
    // //int i = 0;
    // //unsigned char PORT_A = 0x80;
    // unsigned char PORT_A = 0x00;
    
    // //printf(" 0PORT_A = 0x%2.2x\n",PORT_A);
    // for(int i = 0; i < 8; i ++)
    // {   if(PORT_A == 0x00){
    //     PORT_A = 0x80;
    // } else{
    //     PORT_A = PORT_A >> 1;
    // }
    //     // PORT_A = PORT_A >> 1;
    //     printf("%2dPORT_A = 0x%2.2x\n", i+1,PORT_A);
    // }    

    getch();
    return 0;



}
int sum(int a, int b, int c)
{
    int resault = a+b+c;
    float res = sqrt(4);
    printf("res =%f\n", res);
    return resault; 
}