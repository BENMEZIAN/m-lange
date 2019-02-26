#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int t1[10];
	          
	int s,nb,i;
	/*double */float p;
	for(i=0;i<10;i++){
		printf("t1[%d]=%d\n",i,t1[i]);
	}
	
    	p=1;  s=0;  nb=0;
	for(i=0;i<10;i++){
		p=p*t1[i];
		if(t1[i]>0){
			nb=nb+1;
			s=s+t1[i];
			p=p*t1[i];
		}
	}
	printf("le produit des elements est:%f\n",p);
	printf("le nomdre d'elements positives est:%d\n",nb);
	printf("la somme des positifs est:%d",s);
	return 0;
}
