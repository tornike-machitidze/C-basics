#include <stdio.h>

struct Object {
  const char *name;
};

/**
 * modifies reference objcets
 * @param {Number} o - reference of the object value
 * @param {Number} n - reference of the number value
 * @returns void
 */
void modify(struct Object * o, int * n) {
  (*o).name = "Tornike";
  *n = 100;
}

int main() {
  struct Object user;
  user.name = "Torrnike";
  int *score = 87;

  printf("User: %s\n", user.name);
  printf("Score: %d\n", score);

  modify(&user, &score);

  printf("Modified User: %s\n", user.name);
  printf("Modified Score: %d\n", score);

  return 0;
}