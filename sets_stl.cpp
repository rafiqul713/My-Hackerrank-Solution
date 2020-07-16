#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<long long>s;
    set<long long>::iterator itr; 
    int Q,Y;
    long long X;
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>Y;
        if(Y==1){
            cin>>X;
            s.insert(X);
        }

        else if(Y==2){
           cin>>X;
           itr=s.find(X);
           if(*itr==X){
               s.erase(X);
           }
        }

        else if(Y==3){
           cin>>X;
           itr=s.find(X);

           if(!(itr==s.end())){
               cout<<"Yes"<<endl;
           }

           else{
               cout<<"No"<<endl;
           } 
        }

    }  
    return 0;
}




