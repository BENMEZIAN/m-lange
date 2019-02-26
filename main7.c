#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number,n,tab[10],i,j,pal,som;
	

	printf("donner le nombre n:");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++){
		printf("donner les element tab[%d]:",i);
		scanf("%d",&tab[i]);
	}
	
   som=0;
	for(i=1;i<=n;i++){
		som=som+tab[i];	
	}
	printf("la somme est:%d",som);
	// il y a un problème en exécution
   i=1;  j=n;
	while(i<j){
		if(tab[i]==tab[j]){
			i=i+1;
			j=j-1;
			printf("\n");
		}
    }
       if(tab[i]!=tab[j]){
			printf("le nombre n'est palindrome");
		}
    
	return 0;
}
