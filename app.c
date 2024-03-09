#include <stdio.h>
#include <stdlib.h>

// fgetc() can read each caracter from readabale stream
// fprintf() can write in any writabale stream
// EOF - end of file
// to stop the process ctrl + D
// fflush() - without it fprintf waits and grabs inpit before it writes in file, flush makes not waiting and writing imedaitly


int main() {

  FILE *outputFile = fopen("./dest.txt", "w");
  int c = fgetc(stdin);

  while (c != EOF) {
    fprintf(outputFile, "%c", c);
    fflush(outputFile);
    c = fgetc(stdin);
  }

  exit(0);
}