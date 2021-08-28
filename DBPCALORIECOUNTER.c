#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FOOD_SIZE 11
int breakfast();
int lunch();
int evening_snack();
int dinner();
void cal_counter();
int main(){
	//this is person ideal calorie
	printf("\n\n");
	printf("                  *************************WELCOME,MANAGE YOUR CALORIE WITH US*******************");
    printf("\n\n");
	float intake;
	float your_calories_male,your_calories_female;
	float age,weight,height;
	char gen;
	printf("Enter your Body weight(in kilograms) : ");
	scanf("%f",&weight);
	printf("\nEnter you Height (in cm) : ");
	scanf("%f",&height);
	printf("\nEnter your age : ");
	scanf("%f",&age);
	printf("\nEnter male(m)/female(f) : ");
	scanf("%s",&gen);
	if(gen=='m'){
	your_calories_male=(66.5+(13.8*weight)+(5*height))/(6.8*age);
	printf("\nYour IDEAL-CALORIES Intake : %.2f",(your_calories_male*1.2)*100);
}
	else{
		your_calories_female=(655.1+(9.563*weight)+(1.850*height))/(4.676*age);
		printf("\nYour IDEAL-CALORIES Intake : %.2f",(your_calories_female*1.2)*100);
	}
	getch();
	cal_counter();
	}
void cal_counter(){
int calories_count=0;
auto int total_cal();//nested functions are not present in c so to do that we will use auto while defining a function//
auto int breakfast();
breakfast();
auto int lunch();
lunch();
auto int evening_snack();
evening_snack();
auto int dinner();
dinner();
	int breakfast(){
		FILE *fi;
		fi=fopen("food.c","r");
		struct food_item{
		char food[90];
		int calories;
		char fi[90];
		int quantity;
	};
	int a,i,breakfast,lunch,s,ag=0;
	char temp;
	int ret;
	struct food_item f[FOOD_SIZE];
	printf("\n");
	printf("\nEnter how many food items did you have for breakfast : ");
	scanf("%d",&breakfast);
	for(a=0;a<breakfast;a++){
		printf("\nEnter FOOD-ITEM : ");
		scanf("%c",&temp);///to clear the buffer
		gets(f[a].fi);
		printf("\nEnter the QUANTITY : ");
		scanf("%d",&f[a].quantity);}
	   	 while(fgets(f[i].food,90,fi)!=NULL){
	   	fscanf(fi,"%s%d",f[i].food,&f[i].calories);
	 for(a=0;a<breakfast;a++){
		if(strcmp(f[a].fi,f[i].food)==0){
			s=f[i].calories*f[a].quantity;
			printf("\nCALORIES IN %s is %d",f[i].food,s);
			ag=s+ag;
			}
}
}
printf("\n");
printf("\nTOTAL CALORIES OF BREAKFAST:%d",ag);
total_cal(ag);
return;

}
int lunch(){
		FILE *fi;
		fi=fopen("food.c","r");
		struct food_item{
		char food[90];
		int calories;
		char fi[90];
		int quantity;
	};
	int lunch,h,b,i,lf=0;
	char temp;
	struct food_item f[FOOD_SIZE];
	printf("\n");
	printf("\nEnter how many food items did you have for lunch : ");
	scanf("%d",&lunch);
		for(b=0;b<lunch;b++){
		printf("\n");
		printf("Enter FOOD-ITEM : ");
		scanf("%c",&temp);///to clear the buffer
		scanf("%[^\n]",f[b].fi);
		printf("\n");
		printf("Enter the QUANTITY : ");
		scanf("%d",&f[b].quantity);
		}
		while(fgets(f[i].food,90,fi)!=NULL){
	   	fscanf(fi,"%s%d",f[i].food,&f[i].calories);
	 for(b=0;b<lunch;b++){
		if(strcmp(f[b].fi,f[i].food)==0){
		    h=f[i].calories*f[b].quantity;
		    printf("\nCALORIES IN %s is %d",f[i].food,h);
		    lf=h+lf;
			}
			}
			}
			printf("\n");
			printf("\nTOTAL CALORIES OF LUNCH:%d",lf);
			total_cal(lf);
			return;
//			printf("\n");
}
int evening_snack(){
		FILE *fi;
		fi=fopen("food.c","r");
		struct food_item{
		char food[90];
		int calories;
		char fi[90];
		int quantity;
	};
	int i,ev,e,c,ef=0;
	char temp;
	int ret;
	struct food_item f[FOOD_SIZE];
	printf("\n");
	printf("\nEnter how many food items did you have as evening snack : ");
	scanf("%d",&ev);
		for(c=0;c<ev;c++){
		printf("\n");
		printf("Enter FOOD-ITEM : ");
		scanf("%c",&temp);///to clear the buffer
		scanf("%[^\n]",f[c].fi);
		printf("\n");
		printf("Enter the QUANTITY : ");
		scanf("%d",&f[c].quantity);}
  	 while(fgets(f[i].food,90,fi)!=NULL){
	   	fscanf(fi,"%s%d",f[i].food,&f[i].calories);
 for(c=0;c<ev;c++){
		if(strcmp(f[c].fi,f[i].food)==0){
		    e=f[i].calories*f[c].quantity;
		    printf("\nCALORIES IN %s is %d",f[i].food,e);
			ef=e+ef;
}
}
}
printf("\n");
printf("\nTOTAL CALORIES OF EVENING:%d",ef);
total_cal(ef);
return;
}
int dinner(){
		FILE *fi;
		fi=fopen("food.c","r");
		struct food_item{
		char food[90];
		int calories;
		char fi[90];
		int quantity;
	};
	int i,dinn,d,g,df=0;
	char temp;
	struct food_item f[FOOD_SIZE];
		printf("\n");
		printf("\nEnter how many food items did you have in dinner : ");
	scanf("%d",&dinn);
		for(g=0;g<dinn;g++){
		printf("\n");
		printf("Enter FOOD-ITEM : ");
		scanf("%c",&temp);///to clear the buffer
		scanf("%[^\n]",f[g].fi);
		printf("\n");
		printf("Enter the QUANTITY : ");
		scanf("%d",&f[g].quantity);
		}

  	 while(fgets(f[i].food,90,fi)!=NULL){
	   	fscanf(fi,"%s%d",f[i].food,&f[i].calories);
 for(g=0;g<dinn;g++){
		if(strcmp(f[g].fi,f[i].food)==0){
		    
			d=f[i].calories*f[g].quantity;
			printf("\nCALORIES IN %s is %d",f[i].food,d);
			df=d+df;

}
}
}
printf("\n");
printf("\nTOTAL CALORIES OF DINNER:%d",df);
printf("\n\n");
printf("\n                     ************TOTAL CALORIES INTAKE IS = %d*************",total_cal(df));
return;
}
int total_cal(int a){
	calories_count=a+calories_count;
	return calories_count;
}
}
