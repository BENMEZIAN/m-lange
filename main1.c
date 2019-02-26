#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// la solurion est d'ajouter des if else imbriqués

main(int argc, char *argv[]) {
	
	float a,b,c,x,x0,x1,x2,D;
	
	printf("donner a:");
	scanf("%f",&a);
	printf("donner b:");
	scanf("%f",&b);
	printf("donner c:");
	scanf("%f",&c);
		if(a!=0)
		{
			D=b*b-4*a*c;
			printf("le descriminant est:%f\n",D);
			if(D>0)
			{
				x1=(-b+sqrt(D))/2*a;
				x2=(-b-sqrt(D))/2*a;
				printf("les solutions sont: %f %f",x1,x2);
			} 
			else
			{
						
		    if(D=0)
		      {
				x0=-b/2*a;
				printf("solution double est:%f\n",x0=-b/2*a);
        	  }
        	else
		   
			   {
			   	 printf("pas solutions \n");   // y a de problème dans l'execution  
		       }	
	     	}
	     }
	     
		// probleme dans l'execution
	   else
	   {
	   
	  // if(a=0){
	  // correstion de if(b=0) par if(b==0)
	        if(b==0)
		      {
			printf("impossible");
	          }	
	          	else
			  {
				x=-c/b;
				printf("la valeur seule est:%f",x=-c/b);
              }
		
     	}
     		 	return 0;
}
