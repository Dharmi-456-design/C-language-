#include <stdio.h>
int main(){
    int n;
    printf("Enter num:");
    scanf("%d",&n);
    for(int i=65; i<=64+n; i++ ){
        for(int j=1; j<=n-i+1; j++){
        printf(" ");
    }
    for(int k=65; k<=i;k++){
    printf("%c",k);
    }
    printf("\n");
}
    return 0;
}