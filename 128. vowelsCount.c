/*
count the number of vowels in a string
*/

#include <stdio.h>

#include <string.h>

#include <ctype.h>

int main() {
  char s[100] = "hellO";
  int vowel_count = 0;
  int i;
  for (i = 0; i < strlen(s); i++) {
    char x = s[i];
    if (tolower(x) == 'a' || tolower(x) == 'e' || tolower(x) == 'i' || tolower(x) == 'o' || tolower(x) == 'u') {
      vowel_count++;
    }
  }
  printf("vowels count in %s = %d", s, vowel_count);
}

/*
output1:

vowels count in hellO = 2
*/