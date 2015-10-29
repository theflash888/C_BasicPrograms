#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

  char fname[256];
  char lname[256];

  int age = 0;
  int height = 0;

  printf("Please enter your first name: \n");
  scanf("%s", fname);

  printf("Please enter you last name: \n");
  scanf("%s", lname);

  printf("Please enter your age: \n");
  scanf("%d", &age);

  printf("Please enter your height: \n");
  scanf("%d", &height);

  printf("First Name: %s\nLast Name: %s\nAge: %d\nHeight: %d\n",
        fname, lname, age, height);

  return(0);

}
