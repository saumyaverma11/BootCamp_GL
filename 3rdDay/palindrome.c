#include<stdio.h>
int palindrome(char *str,int low, int high){
    if(low>=high){
        return 1;
    }
    if(str[low]!=str[high]){
        return 0;
    }
    palindrome(str,low+1,high-1);
    // return 1;
}
int main(){
    char *str;
    scanf("%s",str);
    int size= (sizeof(str)/sizeof(str-1))-1;
    int low=0;
    int high=size-1;
    if(palindrome(str,low,high)){
        printf("string is palindrome");

    }
    else{
        printf("string is not palindrome");
    }

}