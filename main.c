#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*void cargar(int *MAT[f][c])*/

int main(int argc, char *argv[]) 
{
  int mat[5][4];
  int may=0, men=9999, f=0, c=0;

  
  for(f=0;f<=4;f++)
  {
    for(c=0;c<=3;c++)
    {
    printf("ingrese un valor para la matriz \n [%d][%d]: ", f, c);
    scanf("%d", &mat[f][c]);
    }

  }

  printf("\n La matriz es igual \n");
  for(f=0;f<=4;f++)
  {
    for(c=0;c<=3;c++)
    {
    printf("%d", mat[f][c]);
    }	
    printf("\n");  
    }

  men=mat[0][0];
  for(f=0;f<=4;f++)
    {
      for(c=0;c<=3;c++)
        {
          if(mat[f][c]<men)
          {
            men=mat[f][c];
          }
        }
    }  
  for(f=0;f<=4;f++)
    {
      for(c=0;c<=3;c++)
        {
        if(mat[f][c]>may)
          {
            may=mat[f][c];
          }
        }
    }
    printf("\n El mayor es %d", may);
    printf("\n El menor es %d", men);
  return 0;
}
