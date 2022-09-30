/*
Objective

Grocery stores have lots of information to keep track of: inventory, customers,
 prices, sales, employees, shipping, receiving, and on and on. We are going to
 start building a small part of that here.

For now, we are going to focus on one specific product in a grocery store: apples.
We will put together basic information about them and display the information in
the end.
*/

#include <stdio.h>

int main() {

  int appleQuantity;
  float applePrice = 1.49;
  float appleReview;
  int appleReviewDisplay;
  const char appleLocation = 'F';

  appleQuantity = 23;
  appleReview = 82.5;
  appleReviewDisplay = (int)appleReview;

  printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}
