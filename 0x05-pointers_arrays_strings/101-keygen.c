#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
int main() 
{
  int length;
  scanf("%d", length);
  if (length <= 0)
    {
      printf("password length must greater than 0");
      return (1);
    }
char *password = malloc(length + 1);
char digits[] = "0123456789";
 int digits_length = strlen(digits);
 char letter[] = "abcdefghijklmnoqprstuvwyzx";
 int letter_length = strlen(letter);
char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
 int LETTER_length = strlen(LETTER);
char symbols[] = "!@#$^&*?";
 int symbols_length = strlen(symbols);
 srand(time(NULL) * getpid());
 for (int i = 0; i < length; i++) {
   int char_type = rand() % 4;
   if (char_type == 0) {
password[i] = digits[rand() % digits_length];
   }
else if (char_type == 1) {
password[i] = symbols[rand() % 8];
randomizer = rand() % 4;
printf("%c", password[i]);
}
else if (randomizer == 3) {
password[i] = LETTER[rand() % 26];
randomizer = rand() % 4;
printf("%c", password[i]);
}
else {
password[i] = letter[rand() % 26];
randomizer = rand() % 4;
printf("%c", password[i]);
}
}
return 0; 
}
