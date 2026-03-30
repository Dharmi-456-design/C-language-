#include <stdio.h>
int main(){
    int n=45;
    int square=n*n;
    int div=10;
    int no=0;
    int check=square;

    while(check>0){
        no++;
        check=check/10;
    }
    for(int i=1; i<=no; i++){
        int first=square/div;
        int second=square%div;
        if((n*n)==(first+second)){
            printf("%s", "true");
            return 0;
        }
        div=div*10;
    }
printf("%s","false");


    
}