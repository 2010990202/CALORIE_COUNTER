#include <stdio.h>
int main(){
	int choice;
		FILE *fi;
			fi=fopen("food.c","a");
			if(fi==NULL){
				puts("Can not open this file");
//				exit(0);
			}
		printf("Append");
		printf("\n");
			struct food_item{
				char f[80];
				int cal;
			};
			int num;
			printf("How many elements you want to add: ");
			scanf("%d",&num);
			struct food_item item[num];
			int i;
			char temp;
			for(i=0;i<num;i++){
				printf("Enter the Food item : ");
				scanf("%c",&temp);
				scanf("%[^\n]s",item[i].f);
				printf("Enter calories : ");
				scanf("%d",&item[i].cal);
				fprintf(fi,"%s \t\t\t%d\n",item[i].f,item[i].cal);
			}
			fclose(fi);
}

