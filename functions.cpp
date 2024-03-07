#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("la taille du tableau que vous voulez: "); scanf("%d",&n);
	int i,j,tmp,t[n];
	
	//LECTURE TABLeau
	printf("donner les elements du tableau\n");
	for(i=0;i<n;i++){printf("t[%d]= ",i);
	scanf("%d",&t[i]);}
	
	//affichage des elements avant
	printf("affichage des elements avant\n");
	for(i=0;i<n;i++)
		printf("%d| ",t[i]);
		printf("\n");
	
	//le tri 
	for(i=0;i<n;i++)
		for(j=0;j<n-i;j++)
			if(t[j]>t[j+1]) {
				tmp=t[j];t[j]=t[j+1];t[j+1]=tmp;
			}
			
		
	
	
	//affichage des elements apres
	printf("affichage des elements apres:\n");
	for(i=0;i<n;i++) printf("%d| ",t[i]);
	
	
	
	

	}
