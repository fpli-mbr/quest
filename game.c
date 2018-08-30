#include <stdio.h>
#include <string.h>

static char input[100];

static int getInput()
{
  printf("\n--> ");
  return fgets(input, sizeof(input), stdin) != NULL;
}

static int parseAndExecute()
{
  char *says = strtok(input, " \n");

  if (says != NULL)
  {
    if (strcmp(says, "1") == 0)
    {
      printf("You have chosen Tania");
    }
    else if (strcmp(says, "2") == 0)
    {
      printf("You have chosen Ben");
    }
    else if (strcmp(says, "3") == 0)
    {
      printf("You have chosen Radhika");
    }
    else if (strcmp(says, "4") == 0)
    {
      printf("You have chosen Dave");
    }
    else if (strcmp(says, "5") == 0)
    {
      printf("A dark and mysterious figure.");
    }
  }
  return 1;
}

int main()
{
  printf("\n");
  printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
  printf("  H T T P  \n");
  printf(" Q U E S T \n");
  printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
  printf("\n\n\n");

  printf("It's a dark and stormy night. The full moon glimmers in the sky. \n");
  printf("The leaves rustle. You feel a cold chill run down your spine. \n");
  printf("There's been talk of a werewolf lurking about, but you don't care. \n");
  printf("Choose your adventurer: \n\n");
  printf("1. Tania \n");
  printf("2. Ben \n");
  printf("3. Radhika \n");
  printf("4. Dave \n");
  printf("5. ????? \n");

  while (getInput() && parseAndExecute())
    ;
  printf("\nBye!\n");
  return 0;
}