// printf()  更多的特性

#include <stdio.h>

int main(void){

    // 查看各数据类型占位
    printf("Size of 'int' is: %d,\nSize of 'short' is: %d\nSize of 'long' is: %d\nSize of 'long long' is: %d\n", 
    sizeof(int), sizeof(short), sizeof(long), sizeof(long long));
    
    // 无符号 int 类型
    unsigned int  un =3000000000; 
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;
    // # 这儿应该注意 要根据需要使用正确的类型装换，否则会出现巨大差别。
    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and not %d. The sizes of end is %d\n", end, end, sizeof(end));
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);

    return 0;
}