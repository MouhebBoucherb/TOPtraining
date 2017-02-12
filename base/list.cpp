#include <bits/stdc++.h>
using namespace std;
/*void afficher(list<string> T){
    for(int i=0;i<T.size();i++)
        cout<<T[i]<<" ";
    cout<<"\n";
}*/ // ce code ne fonctionne pas
void affiche_list(list<string> T){
    for(list<string>::iterator it=T.begin();it!=T.end();++it)
        cout<<*it<<" ";
    cout<<"\n";
}
int main()
{
   // les list
   list<string> ch;
   list<int> inte;
   list<char> c;
   // on va travailler avec les chaines de caracteres
   ch={"mouheb","mohamed","roua"};
   affiche_list(ch);
   ch.push_back("amine");
   affiche_list(ch);
   cout<<ch.size()<<endl;
   ch.insert(ch.begin(),"monia");
   affiche_list(ch);
   list<string>::iterator itr=find(ch.begin(),ch.end(),2);
   ch.erase(itr);

    return 0;
}
