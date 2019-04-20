#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

main(){
          
		  int tab1[10],tab2[10];	
          int i,j,n,m;
          bool inverse;
          
          do{
          	printf("donner la valeur de n:");
          	scanf("%d",&n);
          	printf("donner la valeur de m:");
          	scanf("%d",&m);
		  }while(n<0  &&  m<=0  &&  m==n);
		  
		  printf("\n");
		  
		  for(i=0;i<n;i++){
		  	printf("donner tab1[%d]:",i);
		  	scanf("%d",&tab1[i]);
		  }
		  printf("\n");
		  for(i=0;i<n;i++){
		  	printf("tab1[%d] est:%d\n",i,tab1[i]);
		  }
		  printf("\n");
		  for(j=0;j<m;j++){
		  	printf("donner tab2[%d]:",j);
		  	scanf("%d",&tab2[j]);
		  }
		  printf("\n");
		   for(j=0;j<m;j++){
		  	printf("tab2[%d] est:%d\n",j,tab2[j]);
		  }
		  
		  printf("\n");
		  
		  i=0;      j=m-1;       inverse=true;
		  while(i<n  &&  inverse==true){
		  	if(tab1[i]!=tab2[j]){
		  		inverse=false;
			  }
			  i++;
			  j--;
		  }
		  
		  if(inverse==true){
		  	printf("les deux tableaux sont inverses.\n");
		  }else{
		  	printf("les deux tableaux ne sont pas inverses.\n");
		  }
	
	
	
	
	
	system("pause");
}
