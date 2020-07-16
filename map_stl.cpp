#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string,int>m;
    map<string,int>::iterator itr;
    int q,type,marks;
    string name;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>type;
        if(type==1){
            cin>>name>>marks;
            m[name]+=marks;
        }

        else if(type==2){
            cin>>name;
            m.erase(name);
        }

        else if(type==3){
            cin>>name;
            if((m.find(name))==m.end()){
                cout<<0<<endl;
            }
            else{
                cout<<m[name]<<endl;
            }
        }
        
        //Debug
        /*cout<<"Debug "<<endl;
        for(auto& i:m){
            cout<<i.first<<" "<<i.second<<endl;
        }*/
    }   
    return 0;
}




