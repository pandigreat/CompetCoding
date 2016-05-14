/**

Problem : 1880 ( Ä§Öä´Êµä )     Judge Status : Accepted
RunId : 16892833    Language : G++    Author : pandigreat
Code Render Status : Rendered By HDOJ G++ Code Render Version 0.01 Beta

*/

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
#include <math.h>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
#define ull unsigned long long
char str[101111];
int mp[201111];
map<ull,int> g;
char to[201111][82];
int ID=1;
ull got(char x[]){
    ull s=0;
    int len = strlen(x);
    for(int i=0;i<len;i++){
        s = s*137 + x[i];
    }
    return s;
}
int get(char s[]){
    ull x = got(s);
    if(g.find(x)==g.end()){
        g[x]=ID++;
        strcpy(to[ID-1],s);
        return ID-1;
    }else return g[x];
}
char line[101111];
int main()
{
    //freopen("in.txt","r",stdin);
    memset(mp,-1,sizeof(mp));
    while(gets(line)){
        if(strcmp(line,"@END@")==0) break;
        int len = strlen(line);
        for(int i=0;i<len;i++){
            str[i] = line[i];
            if(line[i]==']'){
                str[i+1]='\0';
                mp[get(str)] = get(line+i+2);
                mp[get(line+i+2)] = get(str);
                break;
            }
        }
    }
    int Q;
    scanf("%d",&Q);
    getchar();
    while(Q--){
        gets(line);
        int idx=get(line);
        if(mp[idx]==-1){
            puts("what?");
            continue;
        }
        if(line[0]=='['){
            printf("%s\n",to[mp[idx]]);
        }else{
            strcpy(str,to[mp[idx]]+1);
            str[strlen(to[mp[idx]])-2]='\0';
            printf("%s\n",str);
        }
    }
    return 0;
}
