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
        printf("\n06.EXIT()\n");
        scanf("Select Option : %d",&Option);
        switch (Option)
        {
        case 1:
            printf("\nPUSH() Function using");
            break;

        case 2:
            printf("\nPOP() Function using");
            break;

        case 3:
            printf("\nPEEP() Function using");
            break;

        case 4:
            printf("\nCHANGE() Function using");
            break;

        case 5:
            printf("\nDISPLAY() Function using");
            break;

        case 6:
            printf("\nEXIT() Function using");
            exit(0);
            break;

        default:
            printf("Invalid Option!");
            break;
        }
    }
}