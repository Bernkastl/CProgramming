#include <stdio.h>

#define QUIZ_NUMBER 5
#define STUDENT_NUMBER 5

int main(void)
{
  int marks[QUIZ_NUMBER][STUDENT_NUMBER] = {0};

  for (int i = 0; i < QUIZ_NUMBER; i++)
  {
    printf("Enter marks for quiz %d: ", i + 1);
    for (int j = 0; j < STUDENT_NUMBER; j++)
    {
      scanf("%d", &marks[i][j]);
    }
  }

  printf("%-16s", "Student Number:");
  printf("%-5d%-5d%-5d%-5d%-5d\n", 1, 2, 3, 4, 5);

  printf("%-16s", "Total Score: ");
  float averages[QUIZ_NUMBER] = {0};
  for (int i = 0; i < QUIZ_NUMBER; i++)
  {
    int sum = 0;
    for (int j = 0; j < STUDENT_NUMBER; j++)
    {
      sum += marks[j][i];
    }
    float average = (float)sum / QUIZ_NUMBER;
    averages[i] = average;
    printf("%-5d", sum);
    sum = 0;
  }
  printf("\n");

  printf("%-16s", "Average Score: ");
  for (int i = 0; i < QUIZ_NUMBER; i++)
  {
    printf("%-5.1f", averages[i]);
  }
  printf("\n\n");

  printf("%-15s", "Quiz Number: ");
  printf("%-5d%-5d%-5d%-5d%-5d\n", 1, 2, 3, 4, 5);
  printf("%-15s", "Average Score: ");

  int highest = marks[0][0], lowest = marks[0][0];
  for (int i = 0; i < QUIZ_NUMBER; i++)
  {
    int sum = 0;
    for (int j = 0; j < STUDENT_NUMBER; j++)
    {
      int current_mark = marks[i][j];
      if (current_mark < lowest)
        lowest = current_mark;
      if (current_mark > highest)
        highest = current_mark;
      sum += current_mark;
    }
    float average = (float)sum / QUIZ_NUMBER;
    printf("%-5.1f", average);
  }
  printf("\n");

  printf("Lowest Mark: %d\n", lowest);
  printf("Highest Mark: %d\n", highest);

  return 0;
}
