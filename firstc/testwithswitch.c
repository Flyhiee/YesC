
/*
* Program to evaluate face values.
* Released under the Vegas Public License.
* (c)2014 The College Blackjack Team.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
char card_name[3];
puts("Enter the card_name: ");
scanf("%2s", card_name);
int val = 0;
switch (card_name[0]) {
case 'K':
case 'J':
case 'Q':
  val = 10;
  break;
case 'A':
  val = 11;
  break;
default:
  val = atoi(card_name);
}
printf("The card value is: %i\n", val);
return 0;
}
