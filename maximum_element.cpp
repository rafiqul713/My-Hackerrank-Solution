#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,t,val;
    long int x,max;
    max=-1;
    stack<long int>s,temp;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>t;
        if(t==1){
           cin>>x;
           s.push(x);
           if(s.size()==1){ //only one element in the stack 
               temp.push(x);
           }
           
           if(x>temp.top()){ //current element is maximum element 
               temp.push(x);
           }
           else{
               temp.push(temp.top()); // if current element is not the maximum element                                         // then fill the stack with the previous maximum                                         // value taking from the top
           }
        }
        else if(t==2){
            s.pop();
            temp.pop();
        }
        else if(t==3){
            cout<<temp.top()<<endl;
        }
    }
    return 0;
}

