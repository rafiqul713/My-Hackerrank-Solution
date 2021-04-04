#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
   
   int counter=0;
   int freq[26];
   memset(freq,0,sizeof(freq));
   
   for(auto i: a){
       freq[i-'a']++;
   }
   
   for(auto i:b){
       freq[i-'a']--;
   } 
   
   for(int i=0;i<26;i++){
       counter=counter+ abs(freq[i]);
   }
    
   return counter; 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
