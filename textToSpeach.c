#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

  int keepRunning = 1;
  char userInput[500];
  char answer[4];
  char noAnswer[] = "no";
  printf("Hello I am a text to speech program!\n Thankyou for compiling me ! ! !\n");
  while(keepRunning == 1){
    printf("What would you like me to say?\n");
    // save input to a string
    fgets(userInput, 500, stdin);
    FILE *fp = popen("echo \"this is a test\" | festival --tts", "w"); // call the festival command line program supplied with the string entered by the user
    int i = 0;
    printf("Would you like me to say anything else?\n Please enter yes or no\n");
    // get the users answer
    fgets(answer,3,stdin);
    if(strncmp(noAnswer, answer, 2) == 0) { // the user doesnt want to keep running
      keepRunning = 0; // break the while loop conditional
    }
    pclose(fp);
  }
  return 0;
}
