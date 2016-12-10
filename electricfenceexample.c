#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int
main (int argc, char *argv[]) {
  char *str;
  str = (char *)malloc(sizeof(char) * 2); strcpy(str, "hello");
  free(str);
  return 0; 
}
