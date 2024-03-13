#include <stdio.h>
#include <stdlib.h> // Include this for system("cls") or system("clear")
#include <unistd.h>

int main()
{
    int x, y, i = 0, j;

    for (x = 1; x < 50; x++)
    {
        // Clear the console screen
        system("cls"); // Use "clear" for Unix-like systems

        // Print spaces to move text to the right
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        printf("Rifat");

        // Sleep for a while to control the speed of movement
        usleep(100000);

        i++;
    }

    return 0;
}
