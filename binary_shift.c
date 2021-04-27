#include <stdint.h>
#include <stdio.h>

int main(void){

    uint32_t *pData = (uint32_t*) 0x00001000;
    uint32_t *pTemp = (uint32_t*) 0x0;

    *pTemp = (*pData | (1<<4)); // set 1 the 4th bit

    printf("pTemp = %x", pTemp);
    return 0;
}