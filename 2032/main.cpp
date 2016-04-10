#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stack>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <set>
using namespace std;
//set<int> s;
//set<int>::iterator iter ;
int arr[20000];
int m;
long long n;
long long  C(long long n, long long t){
    if(!t || !(n - t))
        return 1;
    long long sum = 1;
    t = (t > n / 2) ? n - t: t;
    for(long long i = n; i >= n - t + 1; i--)
        sum *= i;
    for(long long i = 2; i <= t; i++)
        sum /= i;
    return sum;
}
void solve(){
}
int main()
{
    while(scanf("%lld", &n) != EOF){
        long long i, j;
        for(i = 0; i < n; i++){
            for(j = 0; j < i; j++){
                printf("%lld ", C(i, j));
            }
            printf("%lld\n", C(i, j));
          // printf("\n");
        }
        printf("\n");
    }
    return 0;
}
//注意各个地方的溢出和表示