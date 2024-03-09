#include <stdio.h>

/**
 * params {Number} argc - arguments count
 * params {Array} argv - arguments array
*/

int main(int argc, char* argv[]) {

  for ( int i = 0; i < argc; i++ ) {
    printf("Argument %d is %s\n", i, argv[i]);
  }

  return 0;
}