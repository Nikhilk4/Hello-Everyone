#include <stdio.h>
int main()
{
    int i, space, rows=5, k=0;
    printf("This is edited version of pyramid")

    for(i=1; i<=rows; ++i)
    {
        for(space=1; space<=rows-i; ++space)
        {
            printf("  ");
        }

        while(k != 2*i-1)
        {
            printf("k ");
            ++k;
        }

        printf("\n");
    }
    
    return 0;
}
