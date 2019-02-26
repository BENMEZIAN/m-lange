#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// programme qui fait la somme du diagonale (la trace d'une matrice)
        int n,m,i,j,s;
		int mat[10][10];
	printf("donner la valeur de n:");
		scanf("%d",&n);
	printf("donner la valeur de m:");
		scanf("%d",&m);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
		printf("la valeur est mat[%d][%d]:",i,j);
		scanf("%d",&mat[i][j]);
		}
	}
	  
	  if(n!=m){
	  	printf("la matrice n'est pas carre. \n");
	  }
	  
	  s=0;
	  for(i=1;i<=n;i++){
		for(j=1;j<=m;j++)
		{
	     if(n==m)
	      {
	      if(i==j)
		    {
	      	s=s+mat[i][j];
		    }
	      }
    	}
	}
	  	printf("la somme est %d",s);	
	
	return 0;
}
