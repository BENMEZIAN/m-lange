#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main(){
	
	int tab1[50];
	int n,i,j,val;
	
	//----lecture de la taille n--------
	
	do{
		printf("donner la taille n:");
		scanf("%d",&n);
	}while(n<=0  ||  n>50);
	
	//-------remplissage de tableu--------
	
	for(i=0;i<n;i++){
		printf("l'element tab1[%d] est:",i);
		scanf("%d",&tab1[i]);
	}
	printf("\n\n");
	//-------------l'affichage de tableau------
	printf("affichage des element:\n");
	for(i=0;i<n;i++){
		printf("l'element tab1[%d]=%d:",i,tab1[i]);
		printf("\n");
	}printf("\n\n");
	
	//--------supprimer une element------
	
	printf("donner la valeur a supprimer:");
	scanf("%d",&val);
	
		for(i=0;i<n;i++){
        	if(tab1[i]==val){
		 for(j=i+1;j<n;j++){
			tab1[j-1]=tab1[j];
		 }
		 n=n-1;
	    }
	    }
	    printf("\n\n");
	    //-------affichage apres suppression------------
	for(i=0;i<n;i++){
		printf("l'element tab1[%d]=%d:",i,tab1[i]);
		printf("\n");
	}
	
}
