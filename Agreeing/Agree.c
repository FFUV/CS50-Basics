#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string response = get_string("Do you agree? ");

    // Convert the response to lowercase for case-insensitive comparison
    for (int i = 0; response[i]; i++)
    {
        response[i] = tolower(response[i]);
    }

    // Check if the response is "yes", "y", "no", or "n"
    if (strcmp(response, "yes") == 0 || strcmp(response, "y") == 0)
    {
        printf("Agreed.\n");
    }
    else if (strcmp(response, "no") == 0 || strcmp(response, "n") == 0)
    {
        printf("Not agreed.\n");
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}
