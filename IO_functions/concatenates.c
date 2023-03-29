#include <stdio.h>

void strcat(char* dest, const char* src) {
  while (*dest != '\0') {
    dest++;
  }
  while (*src != '\0') {
    putchar(*src);
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '\0';
}

int main() {
  char str1 = "Hello, ";
  char str2[] = "world!";

  strcat(str1, str2);

  printf("\nConcatenated string: %s\n", str1);

  return 0;
}
