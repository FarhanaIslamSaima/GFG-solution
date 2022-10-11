#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int k;
   
    cin>>s;
     cin>>k;
    int cnt[26];
    int res=0;

    for(int i=0;i<s.length();i++){
        int dist_count=0;

        memset(cnt,0,sizeof(cnt));
        for(int j=i;j<s.length();j++){
            if(cnt[s[j]-'a']==0){
                dist_count++;
            }
            cnt[s[j]-'a']++;
            if(dist_count==k){
                res++;
            }
            if(dist_count>k){
                break;
            }
        }
    }
    cout<<res;



    return 0;
}