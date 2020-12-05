#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    string s[10000];
    string temp,odd,even;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>s[i];
    }
    
    for(int i=0;i<T;i++){
        temp=s[i];
        odd="";
        even="";
        for(int j=0;j<temp.size();j++){
            if(j%2==0){
                even+=temp[j];      
            }
            else{
                odd+=temp[j];
            }
        }
        
        cout<<even<<" "<<odd<<endl;
        
    }
    
    return 0;
}

