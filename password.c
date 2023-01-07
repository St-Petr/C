#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 10  // Length of the password

char* generate_password() {
  // Initialize the random number generator
  srand(time(0));

  // Set up an array of characters to choose from
  char charset[] = "0123456789"
                   "abcdefghijklmnopqrstuvwxyz"
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int charset_size = sizeof(charset) - 1;  // -1 to exclude the null terminator

  // Allocate memory for the password
  char* password = malloc(LENGTH + 1);  // +1 for the null terminator

  // Generate the password
  for (int i = 0; i < LENGTH; i++) {
    password[i] = charset[rand() % charset_size];
  }

  // null-terminate the password string
  password[LENGTH] = '\0';

  return password;
}

int main() {
  char* password = generate_password();
  printf("Your random password is: %s\n", password);
  free(password);
  return 0;
}
