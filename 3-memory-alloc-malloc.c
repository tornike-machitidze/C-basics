#include <stdlib.h>
#include <stdio.h>

struct Object {
  const char *name;
};


void modify(struct Object * o, int * n) {
  (*o).name = "Tornike";
  *n = 1000;
}

int main() {
  int age = 20;
  int * admin_age_pointer = &age;
  age = 21;

  printf("Age equals %d, its pointer equals: %d\n", age, *admin_age_pointer);

  // type casting (Get the actual data, zeros and ones and convert it in different data.)
  char * admin_age_char_casted = (char *) admin_age_pointer;
  printf("Type casted value %c\n", *admin_age_char_casted);

  // stack (8 Mb), heap
  // allocate 12 byte in heap memory

  int * allocatedMemory = malloc(12);

  // we are allocate memory for 3 ditit/int because each digit is stored in 4 bytes

  for (int i = 0; i < 3; i++) {
    allocatedMemory[i] = 12231243412;
  }

  for (int i = 0; i < 3; i++) {
    printf("Allocated numbers in heap: %d\n", allocatedMemory[i]);
  }

  struct Object obj;
  obj.name = "Torkine";

  int score = 700;

  printf("Before modification obj.name is %s\n", obj.name);
  printf("Before modification score is %d\n", score);

  modify(&obj, &score);

  printf("After modification obj.name is %s\n", obj.name);
  printf("After modification score is %d\n", score);

  return 0;
}