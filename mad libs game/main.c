/*  Simple Mad libs game
    MAUREEN TALLAM
 */




#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color [20];
    char pluralnoun [20];
    char celebrity [20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun : ");
    scanf("%s", pluralnoun);
    printf("Enter a celebrity: ");
    scanf("%s", celebrity);


    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralnoun);
    printf("I love %s\n", celebrity);
    printf("%s obviously love me too! \n", celebrity);

    return 0;
}
