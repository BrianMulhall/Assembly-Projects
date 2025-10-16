#include <stdio.h>

extern void asmFunc(void);



int main(void)
{
    printf("before\n");
    asmFunc();
    printf("after\n");   
    return 0;
}   