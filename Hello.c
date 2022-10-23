#include <stdio.h>
#include <conio.h>

int main()
{
  char name[100];
  char ans;
  clrscr();
  printf("Enter your name: ");
  gets(name);
  printf("Hello, %s!", name);
  printf("How are you %s?", name);
  printf("Are you Fine? (Write Y-Yes or N-No)");
  scanf("%c", &ans);
  if (ans=='Y')
  {
    printf("You are Amazing! It's just a bad day not a bad life! We got your back! Stay Blessed!");
  }
  else
    printf("We are glad that you are fine! Have an amazing Day!");
  getch();
  return 0;
}
