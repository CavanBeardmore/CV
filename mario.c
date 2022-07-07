#include <cs50.h>
#include <stdio.h>

int main(void)
{
//Declaration of variables
    int height;
    int column;
    int row;
    int space;

//Do while loop with user prompt for height input within set range
    do
    {
        height = get_int("Pyramid Height: ");
    }
    while (height > 8 || height < 1);

//
for (row = 0; row < height; row++)
{
    for (column = 0 ; column < height; column++)
    {
        if (row+column < height - 1)
                printf(" ");
        else
                printf("#");
    }
    printf("\n");
}

}

