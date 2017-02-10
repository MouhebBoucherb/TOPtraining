#include <iostream>

using namespace std;

int main()
{
    int n,k;
    int T[50];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>T[i];
    }
    int x=T[k-1];
    int d=0;
    for(int i=0;i<n;i++){
        if(T[i]>0 && T[i]>=x){
            d++;

        }
    }
    cout<<d<<'\n';
    return 0;
}
