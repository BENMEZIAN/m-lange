
#include<stdio.h>
#include<stdlib.h>

int somme(int x,int y){
   int som;
      som=x+y;

  return som;        
}

main(){

    int a,b;
  printf("donner la valeur de a:");
  scanf("%d",&a);
  printf("\n");
  printf("donner la valeur de b:");
  scanf("%d",&b);
  printf("\n");
  printf("la somme est:%d",somme(a,b));
}
