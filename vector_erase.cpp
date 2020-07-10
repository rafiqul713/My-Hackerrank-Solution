#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int>vec;
    int n,pos,a,b,value;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        vec.push_back(value);
    }

    cin>>pos>>a>>b;
    vec.erase(vec.begin()+(pos-1));
    vec.erase(vec.begin()+(a-1),vec.begin()+(b-1));
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}

