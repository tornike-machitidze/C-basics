#include <stdio.h>


int length(char s[]) {
  char c = s[0];
  int length = 0;

  while(c != '\0') {
    length++;
    c = s[length];
  }

  return length;
}

int sum (int a, int b) {
  return a + b;
}


int main () {

  int c = sum(10, 20);

  fprintf(stdout, "Sum is: %d", c);

  fprintf(stdout, "Size of the int: %zu bytes \n", sizeof(int));
  fprintf(stdout, "Size of the float: %zu bytes \n", sizeof(float));
  fprintf(stdout, "Size of the char: %zu bytes \n", sizeof(char));

  fprintf(stdout, "Address of c is: %p \n", &c);

  fprintf(stdout, "Value of the address: %p is %hhu \n", &c, *(&c));

  // char myStr[6];

  // myStr[0] = "T";
  // myStr[1] = "e";
  // myStr[2] = "s";
  // myStr[3] = "t";
  // myStr[4] = "\0";

  // fprintf(stdout, "String value is: %s \n", myStr);
  // fprintf(stdout, "String address is: %p \n", myStr);

  char *str = "hello";

  printf("String address is: %p\n", str);
  printf("String value is: %s\n", str);


  int l = length(str);
  printf("Length of the str is %d \n", l);

  // REFERENCE
  int a = 20;
  int * reference_to_a = &a;
  int value = *(reference_to_a);

  printf("Referece value %d\n", value);

  return 0;
}