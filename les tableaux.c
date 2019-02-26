#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void remplissagetab1(int tab1[],int n){
	   int i;
	   for(i=0;i<n;i++){
		printf("l'element tab1[%d] est:",i);
	   	scanf("%d",&tab1[i]); 
		}
}

void affichagetab1(int tab1[],int n){
	int i;
	for(i=0;i<n;i++){
	printf("tab1[%d]= %d\n",i,tab1[i]);
	}
}

void remplissagetab2(int tab2[],int n){
	   int j;
	   for(j=0;j<n;j++){
		printf("l'element tab2[%d] est:",j);
	   	scanf("%d",&tab2[j]); 
		}
}

void affichagetab2(int tab2[],int n){
	int j;
	for(j=0;j<n;j++){
	printf("tab2[%d]=%d\n",j,tab2[j]);
	}
}

int somme(int tab1[],int tab2[],int tab3[],int n,int m){
	int i;
	for(i=0;i<n;i++){
		tab3[i]=tab1[i]+tab2[i];
	}
}

void affichertab3(int tab1[],int tab2[],int tab3[],int n,int m)
 {
 	int i;
 	for(i=0;i<n;i++){
	 printf("l'element tab3[%d]=%d\n",i,tab3[i]);	 
	 }
 }

int main(int argc, char *argv[]) {
	int tab1[10], tab2[10],tab3[10],m,n;
	
    	do{
    		printf("donner le nombre des elements:");
	     	scanf("%d",&n);
	   }while(n<0 ||  n>10);
	    
	    remplissagetab1(tab1,n);
	    printf("\n");
	    affichagetab1(tab1,n);
	    printf("\n");
	    remplissagetab2(tab2,n);
	    printf("\n");
        affichagetab2(tab2,n);
        printf("\n");
        somme(tab1,tab2,tab3,n,m);
        affichertab3(tab1,tab2,tab3,n,m);
    system("PAUSE");
   return 0;
}
