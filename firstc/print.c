
#include <stdio.h>
int main()
{
  /* Assume name shorter than 20 chars. */
char ex[20]; /* Define an array of 20 characters */
puts("Enter girlfriend's name: "); /* You can use puts and printf  */
scanf("%19s", ex); /* Received input from the user and store it into variable ex. */
printf("Dear %s.\n\n\tYou're history.\n", ex);
return 0;
}
