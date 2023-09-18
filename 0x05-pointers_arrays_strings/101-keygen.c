#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 *
 * Return: 0 (Success)
 */

#define PASSWORD_LENGTH 64

int main(void)
{
    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    const char valid_characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random password
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int index = rand() % (sizeof(valid_characters) - 1); // Get a random index
        password[i] = valid_characters[index];
    }

    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password

    printf("%s\n", password);

    return (0);
}

