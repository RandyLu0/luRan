#include <stdio.h>
int main(){
    int a;
    //Problem 1 
    int sum = 0;
    for(a = 0; a < 1001; a++){
        if(a % 3 == 0 || a % 5 == 0){
            sum += a;
        }
    }

    printf("%d\n",sum);

    //Problem 6
    int squares = 0;
    int squared = 0;

    for(a = 0; a < 101; a++){
        squared += a;
        squares += a * a;
    }
    squared *= squared;

    printf("%d",squared - squares);
    
    return 0;
}