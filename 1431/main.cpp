#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stack>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <set>
#include <queue>
#include <math.h>
using namespace std;
int m, n, l;
char str[12];
void solve(){

}
bool witness(int a,int n)
{
    int t,d,x;
    d=1;
    int i=ceil(log(n-1.0)/log(2.0)) - 1;
    for(;i>=0;i--)
    {
        x=d;  d=(d*d)%n;
        if(d==1 && x!=1 && x!=n-1) return true;
        if( ((n-1) & (1<<i)) > 0)
            d=(d*a)%n;
    }
    return d==1? false : true;
}
bool miller_rabin(int n)
{
    int s[]={2,7,61};
    if(n==2)    return true;
    if(n==1 || ((n&1)==0))    return false;
    for(int i=0;i<3;i++)
        if(witness(s[i], n))    return false;
    return true;
}


bool isPrime(int m){
    if(m % 2 == 0)
        return false;
    int n = pow(m, 0.5);
    for(int i = 3; i <= n; i+= 2)
        if(m % i == 0)
            return false;
    return true;
}
int main()
{
    memset(str, '\0', sizeof(str));
    if(scanf("%d %d", &m, &n) != EOF){
        int i, j;
        if(m & 0x1 == 0)
            m ++;
        while(m <= n){
            itoa(m, str, 10);
            bool flag = true;
            bool flag1 = miller_rabin(m);
            if(!flag1){
                m+=2;
                continue;
            }
            for(i = 0, j = strlen(str) - 1; i <= j; i++, j--){
                if(str[i] != str[j]){
                    flag = false;
                    break;
                }
            }
            if(flag && flag1)
                printf("%d\n", m);
            m+=2;
        }
    }
    return 0;
}
