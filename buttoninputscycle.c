#include <stdio.h>

int main()
{
    // Initialize variables
    int output = 0;
    int button1 = 0;
    int button2 = 0;

    // Main loop
    while (1)
    {
        
        printf("Enter Button-1 state (0 or 1): ");
        scanf("%d", &button1);
        printf("Enter Button-2 state (0 or 1): ");
        scanf("%d", &button2);

        if (button1 == 0 && button2 == 0)
        {
            // No change
            continue;
        }
        else if (button1 == 1 && button2 == 0)
        {
            // No change
            continue;
        }
        else if (button1 == 0 && button2 == 1)
        {
            // No change
            continue;
        }
        else if (button1 == 1 && button2 == 1)
        {
            // Change output from 0 to 1
            if (output == 0)
            {
                output = 1;
            }
        }
        else
        {
            // Change output from 1 to 0
            output = 0;
        }

        // Print new output state
        printf("Output: %d\n", output);
    }

    return 0;
}
