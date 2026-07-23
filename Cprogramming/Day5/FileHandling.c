#include <stdio.h>
int main()
{
  FILE *ptr;
  ptr=fopen("text1.txt","w");
  printf("File Created\n");
    fprintf(ptr,"Hello World");
    fclose(ptr);
    return 0;
}