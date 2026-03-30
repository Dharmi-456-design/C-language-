#include <stdio.h>
int main(){
 int n=145;
 int a=n;
 int sum=0;
 while(n>0){
    int add=n%10;
    int check=1;
    for(int i=add; i>=1; i--){
        check=check*1;
    }
    sum=sum+check;
    n=n/10;
 }

 if(sum==a){
    printf("%s", "True");
 }
 else{
    printf("%s", "False");
 }

    
    return 0;
}
