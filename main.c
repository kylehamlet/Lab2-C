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
  if (gradevalue >= 90.0 && gradevalue < 93.0) {
    lettergrade = "A-";
  }
  if (gradevalue >= 87.0 && gradevalue < 90.0) {
    lettergrade = "B+";
  }
  if (gradevalue >= 83.0 && gradevalue < 87.0) {
    lettergrade = "B";
  }
  if (gradevalue >= 80.0 && gradevalue < 83.0) {
    lettergrade = "B-";
  }
  if (gradevalue >= 77.0 && gradevalue < 80.0) {
    lettergrade = "C+";
  }
  if (gradevalue >= 70.0 && gradevalue < 77.0) {
    lettergrade = "C";
  }
  if (gradevalue >= 60.0 && gradevalue < 70.0) {
    lettergrade = "D";
  }
  else if (gradevalue < 60.0) {
    lettergrade = "F";
  }
  printf("Your letter grade for CMPSC 131 is %s.\n",lettergrade);
  return 0;
}