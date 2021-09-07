/*
find the number of vowel in a string
*/

#include <stdio.h>

#include <string.h>

int main() {
  char s[50] = "she sells seashells on the seashore";
  int vowels = 0;
  int i;
  int len = strlen(s);
  for (i = 0; i < len; i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
      vowels++;
    }
  }
  printf("vowels : %d", vowels);
  return 0;
}

/*
output

vowels : 11

*/