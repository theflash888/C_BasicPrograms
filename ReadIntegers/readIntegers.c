#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  FILE *fp;
  char ch, file_name[25];

  printf("Enter the name of the file contents you wish to see\n");
  gets(file_name);

  fp = fopen(file_name, "r");

  if(fp ==  NULL){
    perror("Error while opening file\n");
    exit(EXIT_FAILURE);
  }

  printf("The contents of the %s file are: \n", file_name);

  // while((ch = fgetc(fp)) != EOF){
  //   printf("%c", ch);
  // }

  fclose(fp);
  return 0;
}
