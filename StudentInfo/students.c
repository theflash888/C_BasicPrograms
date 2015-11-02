#include <stdlib.h>
#include <stdio.h>

typedef struct{
  char *fname[25];
  int student_id;
  int age;
  int year_started;
}student;

void save_student(student std){
  FILE *fp;

  fp = fopen("students.txt", "a");

  fprintf(fp, "%s, %d, %d, %d\n", &std.fname, &std.student_id, &std.age, &std.year_started);
  fclose(fp);
}

int main(void)
{
  student std;

  printf("What is your name?:");
  scanf("%s", &std.fname);

  printf("What is your student ID?:");
  scanf("%d", &std.student_id);

  printf("What is your age?:");
  scanf("%d", &std.age);

  printf("What year did you start school?:");
  scanf("%d", &std.year_started);

  save_student(std);

  return 0;
}
