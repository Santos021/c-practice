#include <stdio.h>
int main (){
    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);
    if(a%2 == 0){
        if (a == 0){
            printf("Neither even nor odd");
        }
        else{
        printf("%d is even",a);
        }
    }
    else {
        printf("%d is odd",a);
    }
    return 0;
}