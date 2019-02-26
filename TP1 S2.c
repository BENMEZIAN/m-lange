#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//prototype des fonctions
int somme(int ,int ,int ,int);

int main(int argc, char *argv[]) {
	
	
	          int tab[20],n,i,s;
	           
	          
	           
	           do{
	           printf("donner la valeur n:");
	           scanf("%d",&n);
	           
			   }while(n<0  ||   n>20);
			   
			   
	             for(i=0;i<n;i++){
	           	  printf("donner la valeur de tab[%d]:",i);
	           	  scanf("%d",tab[i]);
			   }
	           
	           s=0;
	           for(i=0;i<n;i++){
	           	  
	           	  s=s+i;
			   }
	           
	           
	           printf("la somme vaut:%d",s);
	           
	return 0;
}
int somme(int a,int b,int c,int d){
	  
	return a+b+c+d;
}
