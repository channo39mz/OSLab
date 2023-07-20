#include <stdio.h>

int main(){
    int a = 1;
    int sum = 0;
    int count = 0;
    while (1)
    {
        scanf("%d" , &a);
        if (a <= 0){
            break;
        }
        sum += a;
        count += 1;
    }
    if (count == 0){
        count = 1;
    }
    float average = sum / count;
    printf("%d \n" , sum);
    printf("%d \n"  , count);
    printf("%f" , average);
}
