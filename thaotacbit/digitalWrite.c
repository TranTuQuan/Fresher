#include<stdio.h>
#include<stdint.h>
#include<math.h>
#define HIGHT 1
#define LOW 0
uint8_t PORTA =0b00000000;

//      0 0 0 0 0 0 0 0 
//      7 6 5 4 3 2 1 0

void digitalWrite(uint8_t PIN, uint8_t STATUS)
{
    uint8_t x = 0b00000001;
    if(STATUS == HIGHT )
    {
        PORTA = PORTA | (x<< PIN);  
    }
    else 
    {
        x= ~ (x<<PIN);
        PORTA = PORTA & x;
    }
}
long long DecToBin (int dec)
{
    long long bin =0;
    int p =0;
    while (dec>0)
    {
        bin += (dec % 2 ) * pow (10,p);
        ++p;
        dec/=2;
    }
    return bin;
}
int main()
{
    printf("\nPORTA : %d", DecToBin(PORTA));
    digitalWrite(4, HIGHT);   //00010000
    printf("\nPORTA : %d", DecToBin(PORTA));
    digitalWrite(3, HIGHT);   //00011000
    printf("\nPORTA : %d", DecToBin(PORTA));
    digitalWrite(2, HIGHT);   //00011100
    printf("\nPORTA : %d", DecToBin(PORTA));
    digitalWrite(4, LOW);     //00001100
    printf("\nPORTALOW : %d", DecToBin(PORTA));
    digitalWrite(2, LOW);     //00001000
    printf("\nPORTALOW : %d", DecToBin(PORTA));
}