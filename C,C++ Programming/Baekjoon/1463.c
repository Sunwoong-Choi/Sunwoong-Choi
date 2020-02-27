//===----------------------------1463.c------------------------------------===//
// Basic DP Problem. (First)
// Bottom - up method.
// First use of ternary operator.
// https://www.acmicpc.net/problem/1463
//===----------------------------------------------------------------------===//

#include <stdio.h>
int opt_num[1000001] = {0};

int min_finder(int a, int b){
    return a > b ? b : a;
    }


int main(){
    int N;
    scanf("%d",&N);
    opt_num[1] = 0;
    opt_num[2] = 1;
    for (int i = 2 ; i <= N ; i++){
        opt_num[i] = opt_num[i-1] + 1;
        if (i % 2 == 0){
            opt_num[i] = min_finder(opt_num[i], opt_num[i/2]+1);
            }
        if (i % 3 == 0){
            opt_num[i] = min_finder(opt_num[i], opt_num[i/3]+1);
        }
    }
    printf("%d",opt_num[N]);
    return 0;
}
