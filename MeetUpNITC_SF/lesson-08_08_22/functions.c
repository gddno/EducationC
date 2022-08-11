#include <stdio.h>
#include <conio.h>


 #define LED_1 0
 #define LED_2 1

 #define LED_8 7

/**
 * 
 * Prints on display byte in binary format like 0b10101010
 * @brief Display byte in binary format
 * @param data byte for translating in binary format
 * @return void
 * @see htt://afda
 * @exeption 
 */


void printByte(unsigned char data)
{
    unsigned char mask = 0x80;
    printf("b");
    for(int i = 7; i >= 0; i --){   
        if((data & mask) > 0){
            printf("1");
        }else{
            printf("0");
        }
        mask = mask >> 1;
    }
    return;
}

void main()
{
    int a;
    // //int i = 0;
    // //unsigned char PORT_A = 0x80;
    unsigned char PORT_A = 0x00;
    
    // //printf(" 0PORT_A = 0x%2.2x\n",PORT_A);
     for(int i = 0; i < 32; i ++){   
        if(PORT_A == 0x00){
         PORT_A = 0x80;
     } else{
         PORT_A = PORT_A >> 1;
     }
         printf("%2d PORT_A = 0x%2.2x ", i+1,PORT_A);
         printByte(PORT_A);
         printf("\n");

    }    

    printf("test");
    printByte(0xAA);
    printf("\n");

    getch();   
}