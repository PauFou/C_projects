#include <stdio.h>
#include <stdbool.h>

/*
Objective

In this project, you will learn to make your own
mini-calendar with some cool functionalities! The
functions that you create will be able to answer
simple questions like:

Is the given year a leap year?
What is the new date 500 days from today?
*/
bool is_leap_year(int);
void add_days_to_date(int*, int*, int*, int*);

bool is_leap_year(int year){
  if(year % 4 != 0){
    return false;
  } else if(year % 100 != 0){
    return true;
  } else if(year % 400 != 0){
    return false;
  } else {
    return true;
  }
}

int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void add_days_to_date(int* mm, int* dd, int* yy, int* days_left_to_add){
  int days_left_in_month;
  while(*days_left_to_add > 0){
    days_left_in_month = days_in_month[*mm] - *dd;
    if(days_in_month[*mm] == 2 && is_leap_year(*yy) == 1){
      days_left_in_month += 1;
    }
    if(*days_left_to_add > days_left_in_month){
      *days_left_to_add -= days_left_in_month - 1;
      *dd = 1;
      if(*mm == 12){
        *mm = 1;
        *yy += 1;
      } else {
        *mm += 1;
      }
    } else {
      days_left_in_month + *days_left_to_add;
      *days_left_to_add = 0;
    }
  }
}


int main() {
  int mm;
  int dd;
  int yy;
  int days_left_to_add;
  printf("Please enter a date between the years 1800 and 10000 in the format mm dd yy and provide the number of days to add to this date: ");
  scanf("%d%d%d%d", &mm, &dd, &yy, &days_left_to_add);
  add_days_to_date(&mm, &dd, &yy, &days_left_to_add);
  printf("%d/%d/%d\n", mm, dd, yy);
}
