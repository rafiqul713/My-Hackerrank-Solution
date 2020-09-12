#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    vector<int>digits;
    long long rem;
    int count=0;
    int temp=n;
    while(temp>0){
        rem=temp%10;
        //cout<<"remainder "<<rem<<endl;
        temp=temp/10;
        digits.push_back(rem);
    }
    
    for(int i=0;i<digits.size();i++){
        if(digits[i]!=0 && (n%digits[i]==0)){
            count++;
        }
    }
    
    return count;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

