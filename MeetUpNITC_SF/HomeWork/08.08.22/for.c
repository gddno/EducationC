#include <stdio.h>
#include <conio.h>

#define LED_1 0x01
#define LED_2 0x02
#define LED_3 0x04
#define LED_4 0x08
#define LED_5 0x10
#define LED_6 0x20
#define LED_7 0x40
#define LED_8 0x80

void main()
{
    unsigned char PORT_A = 0x00;
    for(int i = 0; i < 10; i++){
        PORT_A = PORT_A ^ LED_1;
    printf("PORT_A = 0x%2.2x\n\n", PORT_A);
    }
    getch();
}