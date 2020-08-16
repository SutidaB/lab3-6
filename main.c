#include <stdio.h>

int main(void) 
{
  float radius,high,area;
  printf("input radius : ");
  scanf("%f",&radius);
  printf("input high : ");
  scanf("%f",&high);
  area = (2*3.14*radius)*high+2*(3.14*radius*radius);
  printf("area = %0.2f",area);
  return 0;
}