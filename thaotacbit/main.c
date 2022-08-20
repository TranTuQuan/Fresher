#include <stdio.h>
#include <stdint.h>
#include <math.h>
#define HIGHT 1
#define LOW 0
int BinToDec (long long bin)
{
    int p = 0, dec = 0;
    while ( bin >0 )
    {
        dec += (bin %10) * pow(2,p);
        ++p;
        bin /=10;
    }
    return dec;
}
long long DecToBin (int dec2)
{
    long long bin2 =0;
    int p2 =0;
    while (dec2>0)
    {
        bin2 += (dec2 % 2 ) * pow (10,p2);
        ++p2;
        dec2/=2;
    }
    return bin2;
}


int main()
{
    long long bin;
    printf("Dec = %d", BinToDec(10000000));
    int dec2;

}