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
����Ĳ��а�
�һ���Ϊ
�� ����25�еĵط�Ҫȡģ
�����ȡģ���ǶԵ�

*/