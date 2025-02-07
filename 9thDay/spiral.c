#include<stdio.h>

void spirallyTraverse(int** mat, int r, int c) {
    // code here
    int top=0;
        int right = c-1;
        int bottom = r-1;
        int left = 0;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                printf("%d ",mat[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                printf("%d ",mat[i][right]);
            }

            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--){
              
                printf("%d ",mat[bottom][i]);
            }

            bottom--;
            }

            if(left<=right){
            for(int i=bottom;i>=top;i--){
                
                printf("%d ",mat[i][left]);
            }
            left++;
            }

        }
}

int main(){
    int r=4;
    int c=4;
    int arr[4][4];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",arr[i][j]);
        }
    }
      spirallyTraverse(arr,r,c);
}