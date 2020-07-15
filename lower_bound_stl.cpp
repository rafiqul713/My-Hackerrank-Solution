#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,Q,Y,value;
    vector<int>X;
    vector<int>::iterator lowerBound;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>value;
        X.push_back(value);
    }

    sort(X.begin(),X.end());
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>Y;
        lowerBound=lower_bound(X.begin(),X.end(),Y);
        int resultedIndex=((lowerBound-X.begin()));
        int resultedValue= X[resultedIndex];
        if(Y==resultedValue){
            cout<<"Yes "<<(resultedIndex+1)<<endl;
        }
        else{
            cout<<"No "<<(resultedIndex+1)<<endl;
        }
    }


    return 0;
}

