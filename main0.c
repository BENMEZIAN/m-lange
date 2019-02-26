 #include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void color(int couleurDuTexte,int couleurDeFond){
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}
void menu(){
	color(1,0);
	printf("faire l'addition");
	color(2,0);
	printf("\n");
	color(3,0);
	printf("faire la soustraction");
	color(4,0);
	printf("\n");
	color(5,0);
	printf("faire la multiplication");
	color(6,0);
	printf("\n");
	color(7,0);
	printf("faire la division");
	printf("\n");
	color(8,0);
	printf("faire le modulo");
	color(8,0);
	
	printf("\n");
}
     
main(int argc, char *argv[]) {
 int a,b;
	 int s,p,sou,d,mod;
	 char i;
     printf("donnerla valeur de a:");
     scanf("%d",&a);
     printf("donnerla valeur de b:");
     scanf("%d",&b);
   
     	do{
     			menu();
     			printf("votre choix i:");
	           	scanf("%c",&i);
	           	i=getchar();
    
		  switch(i)
          {
     	case '+':printf("la somme est %d:\n",s=a+b);
     	break;
     	case '-':printf("la soustraction est %d:\n",sou=a-b);
     	break;
     	case '*':printf("le produit est %d:\n",p=a*b);
     	break;
     	case '/':printf("la division est %d:\n",d=a/b);
     	break;
     	case '%':printf("le modulo est %d:\n",d=a%b);
     	break;
     	default:printf("t'as entre un autre caractere '\n");
     	break;	
     	printf("\n");
	        }
		 }while(i!='q');
}
