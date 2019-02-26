#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   int n,s,i;

  printf("donner le nombre n:");
    scanf("%d",&n);
      i=0; 
do{	
  	s=s+i;
  	i=i+1;
  } while(i<=n);
  
  printf("la somme est:%d",s);
	return 0;
}

