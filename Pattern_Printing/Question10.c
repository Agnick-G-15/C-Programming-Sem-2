/*

****
*  *
*  *
****

*/


#include <stdio.h>

void main (){
    int i , j , k ,p ;

    for( i = 0 ; i < 4 ; i ++ )
    {
        for( j = 0 ; j < 4 ; j ++ )
        {
            if ( i == 0 || j == 0 || i == 3 || j == 3 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}