/// week11-1.cpp
/// 想數一下 10000 以下有幾個質數
#include <stdio.h>
int isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0) return 0; ///被整除,就不是質數
    }
    return 1;
}
int main()
{
    int BOUND = 300000, ans = 0;
    for(int i=2; i<BOUND; i++){
        if(isPrime(i)){
            printf("%d ", i);
            ans++;
        }

    }
    printf("質數有:%d 個\n", ans);
}




