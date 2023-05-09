#include <stdio.h>

#define MAX 80
#define UPPER_ENCRYPT ((ch - 'A') + offset) % 26 + 'A'
#define LOWER_ENCRYPT ((ch - 'a') + offset) % 26 + 'a'

int main(void)
{
  int len, offset;
  char message[MAX], c;

  printf("Enter message to be encrypted: ");
  for (len = 0; (c = getchar()) != '\n'; len++) {
    message[len] = c;
  }

  printf("Enter shift amount (1-25): ");
  scanf("%d", &offset);

  printf("Encrypted message: ");
  for (int i = 0; i < len; i++) {
    char ch = message[i];

    if (message[i] >= 'a' && message[i] <= 'z') {
      ch = LOWER_ENCRYPT;
    }
    else if (message[i] >= 'A' && message[i] <= 'Z') {
      ch = UPPER_ENCRYPT;
    }
    printf("%c", ch);
  }
  printf("\n");

  return 0;
}
