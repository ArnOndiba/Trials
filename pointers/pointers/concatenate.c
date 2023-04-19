#include <stdio.h>
void concatenate(char *destination, const char *source) {
  while (*destination) {
    destination++;
  }
  while (*source) {
    *destination = *source;
    destination++;
    source++;
  }
  *destination = '\0';
}
int main() {
  char destination = "Hello ";
  char source[] = "World!";
  concatenate(destination, source);
  printf("Concatenated string: %s\n", destination);
  return 0;
}
