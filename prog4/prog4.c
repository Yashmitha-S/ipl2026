#include<stdio.h>
struct Bitfield{
    unsigned int firstbit:1;
    unsigned int secondbit:1;
    unsigned int nibble:4;
    unsigned int byte:8;
};
int main(){
    struct Bitfield a;
    a.firstbit=1;
    a.secondbit=0;
    a.nibble=0xA; // 1010 in binary
    a.byte=0xFF; // 11111111 in binary

    printf("First bit: %u\n", a.firstbit);
    printf("Second bit: %u\n", a.secondbit);
    printf("Nibble: %X\n", a.nibble);
    printf("Byte: %X\n", a.byte);

    printf("Size of Bitfield structure: %lu bytes\n", sizeof(a));

    return 0;
}