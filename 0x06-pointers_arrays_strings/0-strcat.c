#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */

char *_strcat(char *dest, char *src) 
{
   char *ptr = dest + strlen(dest);
   while (*src != '\0') 
   {
       *ptr++ = *src++;
   }
   *ptr = '\0';
   return dest;
}
