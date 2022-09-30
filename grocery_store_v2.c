/*
Objective

We will start you with our solution to the previous project for our
 apple information for a grocery store. Our version might be slightly different
  than what you had. You might also notice a few changes that were not part of
  the previous project but we will be using these as part of this project. We
  will get to each of the changes in the appropriate tasks.

We will be adding more information, applying sales, modifying the review score
and more.
*/

#include <stdio.h>

int main() {

 int appleQuantity;
 double applePrice = 1.49;
 double appleReview;
 int appleReviewDisplay;
 const char appleLocation = 'F';
 int dayOfWeek = 0;
 int reviewers = 9;
 appleQuantity = 23;
 appleReview = 823 / reviewers;
 appleReviewDisplay = (int)appleReview;

 dayOfWeek += 3;

 reviewers += 1;

 appleReview = (823 + 52) / reviewers;
 appleReviewDisplay = (int)appleReview;


 if( appleQuantity < 10 )
 {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
 }
if( dayOfWeek == 3 )
 {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * 1.4);
 }
 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);
}
