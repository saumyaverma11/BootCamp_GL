#include<stdio.h>
int countdigit(int n,int c){
    if(n==0){
        return c;
    }
    n%10;
    c++;
    countdigit(n/10,c);
}
int main(){
    int n;
    scanf("%d",&n);
    int c=0;
    printf("%d",countdigit(n,c));

}