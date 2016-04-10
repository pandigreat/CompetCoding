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
//int arr[20000];
int m,n ;

void solve(){
}
int main()
{
  //  while(scanf("%d", &n) != EOF){

 //   }
    scanf("%d", &n);
         while(n --){
            scanf("%d", &m);
            int temp = (1 + (1 + (m - 1) * 2))  ;
            temp = ((temp ) * m / 2) % 10000 ;
            printf("%d\n", temp);
        }
    return 0;
}
/*
迷离的不行啊
我还以为
在 代码25行的地方要取模
结果不取模才是对的

*/