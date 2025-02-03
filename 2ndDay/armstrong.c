#include<stdio.h>
#include<math.h>
int main(){
    int num,r,d=0,arm=0;
    scanf("%d",&num);
    int orNum=num;

    while(num>0){
        num=num/10;
        d++;
    }
    num=orNum;
    while(num>0){
        r=num%10;
        // arm=arm+(int)pow(r,d);

        int pow=1;                ///because of some double issue
        for(int i=1;i<=d;i++){
            pow*= r;
        }
        arm=arm+pow;
        num=num/10;
    }
    if(arm==orNum){

        printf("it is a armstrong number");
    }
    else{
        printf("it is not armstrong");
    }

}

//cube free is the number which is not devided by cube of prime number