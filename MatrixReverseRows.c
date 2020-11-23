#include <stdio.h>
#include <stdlib.h>

int main(void){

    long int N,M,n,m,i,j,y,x;
    system("cls");
    printf("Enter matrix size:\n");
    printf(":");scanf("%d",&M);   

    int matrix[M][M];{
        for (n=0;n<M;n++){
            
            for(m=0;m<M;m++){
                matrix[n][m]=rand()%(50);
                printf("  %d",matrix[n][m]);
            }
            puts("   \n");  
        }
    }
printf("\n");



printf("\n");
system("pause"); 
return 0;
}