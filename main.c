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
char *lettergrade;
  if (gradevalue >= 93.0) {
    lettergrade = "A";
  }
  else if (93.0 > gradevalue && gradevalue >= 90.0) {
    lettergrade = "A-";
  }
  else if (90.0 > gradevalue && gradevalue >= 87.0) {
    lettergrade = "B+";
  }
  else if (87.0 > gradevalue && gradevalue >= 83.0) {
    lettergrade = "B";
  }
  else if (83.0 > gradevalue && gradevalue >= 80.0) {
    lettergrade = "B-";
  }
  else if (80.0 > gradevalue && gradevalue >= 77.0) {
    lettergrade = "C+";
  }
  else if (77.0 > gradevalue && gradevalue >= 70.0) {
    lettergrade = "C";
  }
  else if (70.0 > gradevalue && gradevalue >= 60.0) {
    lettergrade = "D";
  }
  else
    lettergrade = "F";
    
  printf("Your letter grade for CMPSC 131 is %s.\n",lettergrade);
  return 0;
}