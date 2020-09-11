// Author: Kyle Hamlet kjh6064@psu.edu
// Solo
// Section: 5
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  double gradevalue;
  char *grade = readline("Enter your CMPSC 131 grade: ");
  gradevalue = atof(grade);
  if (gradevalue >= 93.0) {
    printf("Your letter grade for CMPSC 131 is A");
  }
  if (gradevalue >= 90.0) {
    printf("Your letter grade for CMPSC 131 is A-");
  }
  if (gradevalue >= 87.0) {
    printf("Your letter grade for CMPSC 131 is B+");
  }
  if (gradevalue >= 83.0) {
    printf("Your letter grade for CMPSC 131 is B");
  }
  if (gradevalue >= 80.0) {
    printf("Your letter grade for CMPSC 131 is B-");
  }
  if (gradevalue >= 77.0) {
    printf("Your letter grade for CMPSC 131 is C+");
  }
  if (gradevalue >= 70.0) {
    printf("Your letter grade for CMPSC 131 is C");
  }
  if (gradevalue >= 60.0) {
    printf("Your letter grade for CMPSC 131 is D");
  }
  else if (gradevalue < 60.0) {
    printf("Your letter grade for CMPSC 131 is F");
  }
  
  return 0;
}