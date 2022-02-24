#include <stdio.h>
#include <string.h>
char *_strcat(char *dest, char *src)
{
  strncat(src, dest, 0);
    return(src);
}
