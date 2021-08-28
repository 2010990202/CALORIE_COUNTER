#include <stdio.h>
#include <stdlib.h>
#define FOOD_SIZE 31
int main(){
	FILE *fi;
	struct food_item{
		char food[90];
		int calories;
		char fi[90];
		int quantity;
	};
	struct food_item f[FOOD_SIZE];
	fi=fopen("food.c","w");
	if(fi==NULL){
		puts("Can not open this file");
		exit(1);
	}
	int i=0,temp;
	while(i<FOOD_SIZE){
		printf("Enter food item: ");
		fflush(stdin);
	//	scanf("%s",f[i].food);//bcoz of temp first letter will always go in temp thats why you have print the first letter twice
		gets(f[i].food);
		fflush(stdin);
		printf("Enter calories : ");
		scanf("%d",&f[i].calories);
		fprintf(fi,"%s \t\t\t%d\n",f[i].food,f[i].calories);
		i++;
	}
//	fclose(fi);
	printf("\n");
	fi=fopen("food.c","r");
	if(fi==NULL){
		puts("can not open");
		exit(2);
	}
	int m=0;
	while(m<FOOD_SIZE){
	while(fscanf(fi,"%s %d\n",f[m].food,&f[m].calories)!=EOF);
	m++;
}
printf("FOOD_ITEM\t\t\tCALORIES\n");
int n=0;
while(n<FOOD_SIZE){
	printf("%s \t\t\t%d\n",f[n].food,f[n].calories);
	n++;
}
	fclose(fi);
	
}
