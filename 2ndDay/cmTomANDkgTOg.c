#include<stdio.h>
int main(){
    int cm,m,kg,g,km;
    int ch;
    printf("enter 1 for convert cm to m:\n");
    printf("enter 2 for convert m to cm:\n");
    printf("enter 3 for convert kg to g:\n");
    printf("enter 4 for convert g to kg:\n");
    printf("enter 5 for convert m to km:\n");
    printf("enter 6 for convert km to m:\n");
    printf("enter 7 to exit:\n");
    printf("enter your choice:\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("enter number in centimeter:");
        scanf("%d",&cm);
        m=cm/100;
        printf("number in meter is %d",m);
        break;

        case 2:
        printf("enter number in meter:");
        scanf("%d",&m);
        cm=m*100;
        printf("number in centimeter is %d",cm);
        break;

        case 3:
        printf("enter number in kilogram:");
        scanf("%d",&kg);
        g=kg*1000;
        printf("number in gram is %d",g);
        break;

        case 4:
        printf("enter number in gram:");
        scanf("%d",&g);
        kg=g/1000;
        printf("number in kilo gram is %d",kg);
        break;

        case 5:
        printf("enter number in kilo meter:");
        scanf("%d",&km);
        m=km*100;
        printf("number in meter : %d",m);
        break;

        case 6:
        printf("enter number in meter:");
        scanf("%d",&m);
        km=m/100;
        printf("number in kilo meter %d",km);
        break;

        case 7:
        printf("EXIT!");
        break;

        default:
        printf("not valid");

    }


}