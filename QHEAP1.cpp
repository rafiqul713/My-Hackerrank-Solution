#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
#include<set>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int type;
    long long int q,v;
    //priority_queue<long long int,vector<long long int>,greater<long long int>>min_heap;
    multiset<long long int>s;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>type;
        if(type==1){
            //min_heap.push(v);
            cin>>v;
            s.insert(v);
        }
        else if(type==2){
            cin>>v;
            auto iterator=s.find(v);
            s.erase(iterator);
        }
        else if(type==3){
            cout<<*s.begin()<<endl;
        }
    }       
    return 0;
}

