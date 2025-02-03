#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
   //using nested if else

   if(year%4==0)
   {
    if(year%100==0)
    {
        if(year%400==0){
            printf("leap year");
        }
        else{
            printf("not a leap year");
        }
    }
    else{
        printf("leap year");
    }

   }
   else{
    printf("not a leap year");
   }






//using if else ladder

// if(year%400 ==0){
//     printf("leap year");
// }
// else if(year%100 ==0){
//     printf("not a leap year");
// }
// else if(year%4 ==0){
//     printf("leap year");
// }
// else{
//     printf("not a leap year");
// }








//using conditional 

// if((year%4==0 && (year%100)!=0)|| year%400==0 ){
//     printf("leap year");

// }
// else{
//     printf("not a leap year");
// }
}