#include "main.h"
#include "stdio.h"

/**
 * print_buffer - func that print a buffer 10 bytes at a time, starting with
 * the byte position, then showing the hex content
 * then displaying printable characters.
 *
 * @b: its a buffer to be printed.
 * @size: its a number of bytes size to be printed from the buffer.
 *
 * Description: prints the buffer as bytes each lines and shows the content
 * Return: nothing to return.
 */
void print_buffer(char *b, int size)
{
int byte, index;
/*0. first loop print the offset (position in buffer) with 8 chars hexa*/
if (size <= 0)
printf("\n");
for (byte =  0; byte < size; byte += 10)
{
printf("%08x: ", byte); /* ==> 00000000 to 00000078*/
/*1. print the hexadecimal content, 2 bytes at a time*/
for (index = 0; index < 10; index++)
{
/*2. check condition if less than size buffer else print two space*/
if (index + byte < size)
printf("%02x", b[index + byte]);/* ==>54686973206973206120...*/
else
printf("  ");/*7366 756e 0a00  */
/*3. each two char hexadecimal do space*/
if (index % 2 != 0)
printf(" ");/*==>5468 6973 2069 7320 6120 ...*/
}
/*4. print ASCII as printable character print the letter, if not, print .*/
for (index = 0 ; index < 10; index++)
{
if (index + byte < size)
{
char c = b[index + byte]; /*or use if (b[i+b]>= 32 && b[i+b]<= 126*/
if (c >= 32 && c <= 126)
printf("%c", c);
else
printf(".");
}
}
printf("\n");
}
}




