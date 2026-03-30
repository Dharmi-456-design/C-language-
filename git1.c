#include <stdio.h>
int main(){
    int n;
    printf("Enter num:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++ ){
        for(int k=1; k<=2*n -1;  k++){
            if(k>=n-(i-1) && k<= n+(i-1)){
                printf("*");
            }
        else{
         printf(" ");
        }
    }
        printf("\n");
    }
    return 0;
}

