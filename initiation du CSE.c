#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct etudiant{
	
	char nom[20];
	char prenom[25];
	int matricule;
}etudiant;

void main(int argc, char *argv[]) {
	         
	       struct etudiant etud[10];
	        int i,n;
	        
	        // la taille
	        
	        printf("donner la valeur n:");
	       
	        do{
	        	 scanf("%d",&n);
			}while(n<0  ||  n>10);
	         
	         // remplissage
	         for(i=0;i<n;i++){
	         	 printf("donner le nom d'etudiant:");
	         	 scanf("%s",&etud[i].nom);
	             printf("donner le prenom d'etudiant:");
	             scanf("%s",etud[i].prenom);
	             printf("donner le matricule d'etudiant:");
	         	 scanf("%d",&etud[i].matricule);
			 }
	         // affichage
	          for(i=0;i<n;i++){
	         	 printf("donner le nom d'etudiant:",etud[i].nom);
	             printf("donner le prenom d'etudiant:",etud[i].prenom);
	             printf("donner le matricule d'etudiant:",etud[i].matricule);
			 }
	    
}
