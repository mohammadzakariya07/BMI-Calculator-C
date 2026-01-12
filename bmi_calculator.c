#include<stdio.h>
void choosew();
void chooseh();
void bmicalculator();
void bmicatagory();
int weightunit,heightunit;
    float height,weight,bmi;
int main() {
    int choose;
    do{
        printf("\n-----WELCOME TO THE BODY MASS INDEX CALCULATOR-----\n");
        printf("\n-- MOHAMMAD ZAKARIYA --\n");
        printf("1. CHOOSE THE WEIGHT UNIT \n");
        printf("2. CHOOSE THE HEIGHT UNIT \n");
        printf("3. calculate BMI\n");
        printf("4. \n ----------EXIT----------\n");
        printf("choose an option : \n");
        scanf("%d",&choose);
        switch(choose) {
            case 1: choosew();
            break;
            case 2: chooseh();
            break;
            case 3: bmicalculator();
            break;
            case 4:printf("exiting..................\n");
            break;
            default:printf("INVALID INPUT !!!!!!!!!\n");
        }
    }
        while(choose!=4);
        return 0;
}
void choosew() {
       printf("choose the weight unit from following :\n ");
        printf("1. kilogram\n");
        printf("2. gram\n");
        printf("3. pound\n");
        printf("\n ENTER WEIGHT UNIT CHOICE : \n");
        scanf("%d", &weightunit);
        printf("\n enter weight :  \n");
        scanf("%f",&weight);

        switch(weightunit) {
            case 1:
            break;
            case 2:
            weight /=1000;
            break;
            case 3:
            weight*=0.4536;
            break;
            default: printf("\nINVALID WEIGHT  INPUT\n");
            return;
        }
}
void chooseh() {
       printf("choose the height unit from the following :\n");
        printf("1. meter\n");
        printf("2. centimeter\n");
        printf("3. feet\n");
        printf("4. inches\n");
        printf("\n ENTER HEIGHT UNIT CHOICE : \n");
        scanf("%d",&heightunit);
        printf("enter hright \n");
        scanf("%f",&height);

        switch(heightunit) {
            case 1:
            break;
            case 2:
            height /=100;
            break;
            case 3:
            height*=0.3048;
            break;
            case 4:
            height*=0.0254;
            break;
            default: printf("\nINVALID HEIGHT  INPUT\n");
            return;
        }
}
   
void bmicalculator() {
    if(height<=0 || weight <=0) {
        printf("\n invalid height and weight\n");
        return;
    }
    bmi= weight/(height*height);
    printf("\n your BMI is : %.3f\n",bmi);
    bmicatagory();
}
void bmicatagory() {
    if(bmi <18.5) {
        printf("catagory : underweight\n");
    }
    else if(bmi <24.5) {
        printf("catagory : normal weight \n");}
    else if(bmi <29.9) {
        printf("catagoy : overweight \n");
        }
    else
    printf("catagory : obesity\n");
    }
