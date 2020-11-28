#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumDistances function below.
int minimumDistances(vector<int> a) {
    int len=a.size();
    int min=-1;
    int temp_min=-1;
    bool flag=true;
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(a[i]==a[j]){
                temp_min=j-i;
                if(flag){ // access only one time
                    min=temp_min;
                    flag=false;
                }
                if(temp_min<min){
                    min=temp_min;
                    //cout<<"Min "<<min<<endl;
                }
                else{
                    continue;
                }   
            }
        }
    }
    
    return min;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    int result = minimumDistances(a);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

