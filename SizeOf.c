#include<stdio.h>
void main() 
{
    int b = 120;
    float f = 123.0;
    double d = 1222.90;
    char a = 'A';
    char str[] = "hello";

    printf("Size of int: %d bytes\n", sizeof(b));
    printf("Size of float: %ld bytes\n", sizeof(f));
    printf("Size of double: %ld bytes\n", sizeof(d));
    printf("Size of char: %ld byte\n", sizeof(a));
    printf("Size of char: %ld byte\n", sizeof(str));
}