#include <stdio.h>

int main() {
    int n,composite=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            composite=1;
            printf("Number is composite.");
            break;
        }
       
    }
 if(composite==0){   
    printf("Number is prime.");
}
    return 0;
}