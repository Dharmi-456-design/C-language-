#include <stdio.h>
int main(){
    int n;
    printf("Enter num:");
    scanf("%d",&n);
    for(int i=65; i<=64+n; i++ ){
        for(int j=1; j<=64+n-i; j++){
        printf(" ");
    }
    for(int k=65; k<=2*i-65 ;k++){
    printf("%c",k);
        }
    printf("\n");
    }
    return 0;
}