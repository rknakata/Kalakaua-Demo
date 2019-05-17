#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

  int keepRunning = 1;
  char userInput[500];
  char command[750];
  char answer[4];
  char noAnswer[] = "no";
  char firstPart[] = "echo \"";
  char lastPart[] = "\" | festival --tts";
  printf("Hello I am a text to speech program!\nThankyou for compiling me ! ! !\n");
  command[0] = '\0';
  printf("What would you like me to say?\n");
  // save input to a string
  fgets(userInput, 500, stdin);
  userInput[strcspn(userInput, "\n")] = 0;
  strcat(command, firstPart);
  strcat(command, userInput);
  strcat(command, lastPart);
  FILE *fp = popen(command, "w"); // call the festival command line program supplied with the string entered by the user
  pclose(fp);
  return 0;
}
