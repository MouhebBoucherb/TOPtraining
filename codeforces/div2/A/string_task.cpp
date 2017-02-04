#include <bits/stdc++.h>
using namespace std;
char minuse(char c){
    if(c>='A' && c<='Z')
        return c + ('a'-'A');
    return c;
}
int main()
{
     ios::sync_with_stdio(false);
     string S,m;
     cin>>S;
     int si=S.length();
     for(int i=0;i<si;i++){
            char c=minuse(S[i]);
        if(c!='a' && c!='o' && c!='e' && c!='u'&& c!='y' && c!='i'){
            m.push_back('.');
            m.push_back(minuse(S[i]));
        }
     }
     cout<<m<<"\n";
    return 0;
}
