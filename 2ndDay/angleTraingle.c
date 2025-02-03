#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0 && b>0 && c>0){
        if(a+b+c == 180){
            if(a+b>c && a+c>b && b+c>a){
            printf("triangle is valid");
            }
            else{
                printf("not a triangle:");
            }
        }
        else{
            printf("triangle is not valid");
        }

    }
    else{
        printf("triangle is not valid");
    }

}