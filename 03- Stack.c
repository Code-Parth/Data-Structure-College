// Implement a Program for stack that performs following operations using array.
// PUSH()
// POP()
// PEEP()
// CHANGE()
// DISPLAY()
// EXIT()

#include <stdio.h>
#define N 3

int s[N];

void main()
{
    int x, y, Option;
    while (1)
    {
        printf("\nSelect Option which you want to perform.");
        printf("\n01.PUSH()");
        printf("\n02.POP()");
        printf("\n03.PEEP()");
        printf("\n04.CHANGE()");
        printf("\n05.DISPLAY()");
        printf("\n06.EXIT()");
        switch (Option)
        {
        case 1:
            printf("\n01.PUSH()");
            break;

        case 2:
            printf("\n02.POP()");
            break;

        case 3:
            printf("\n03.PEEP()");
            break;

        case 4:
            printf("\n04.CHANGE()");
            break;

        case 5:
            printf("\n05.DISPLAY()");
            break;

        case 6:
            printf("\n06.EXIT()");
            break;

        default:
            printf("Invalid Option!");
            break;
        }
    }
    return 0;
}