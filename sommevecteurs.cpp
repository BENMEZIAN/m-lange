#include<stdio.h>

 void somme2vecteurs(int tab1[] , int tab2[] ,int tab3[], int k, int n , int m)
 {
 	int i,j;
 	
 	for(i=0;i<n;i++){
			tab3[i]=tab1[i]+tab2[i];
			 printf("l'element tab3[%d]=%d\n",i,tab3[i]);
			 
	 }
 }

main(){
	
	int  tab1[10], tab2[10], tab3[10];
	int i,j,n,k,m;
	
	//------------les tailles des tableaux---------------
	
	printf("donner la taille de n:");
	scanf("%d",&n);
	
	printf("donner la taille de m:");
	scanf("%d",&m);
	
	//-----------remplissage des éléments------------
	
		for(i=0;i<n;i++){
 		printf("l'element tab1[%d] est:",i);
 		scanf("%d",&tab1[i]);
	 }
	 
	 printf("\n");
	
		for(j=0;j<m;j++){
 		printf("l'element tab2[%d] est:",j);
 		scanf("%d",&tab2[j]);
	 }
	
	printf("\n");
	
	//------------le traitement-----------------
	
	somme2vecteurs(tab1,tab2,tab3,k,n,m);
	
}
