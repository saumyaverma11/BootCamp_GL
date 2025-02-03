#include<stdio.h>
#include<string.h>
void reverse(char str[],int low, int high ){
    if(low>=high){
        return;
    }
    char temp=str[low];
    str[low]=str[high];
    str[high]=temp;
    reverse(str,low+1,high-1);
}
int main(){
    char str[10];
    scanf("%s",str);
    int size = strlen(str);
    int low=0;
    int high=size-1;
    reverse(str,low,high);
    printf("%s",str);

}