#include<stdio.h>
#include<stdint.h>
union A
{
    uint8_t x;   //1byte
    uint32_t y;    //2 byte
    uint16_t k;   // 8byte  4
    uint16_t l;   // 8byte
};
int main()
{
    union A abc;
    printf(" size : %d", sizeof(abc));
    printf( "\n x: %p", &abc.x);
    printf( "\n y: %p", &abc.y);
    printf( "\n k: %p", &abc.k);
    printf( "\n l: %p", &abc.l);


}