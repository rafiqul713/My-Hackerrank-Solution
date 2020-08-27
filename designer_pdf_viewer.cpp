#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the designerPdfViewer function below.
int find_max(int arr[],int n){
    int max=0;
    for(int i;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    return max;
}
int designerPdfViewer(vector<int> h, string word) {
    int character[7];
    int area[7];
    int n= word.size();
    for(int i=0;i<n;i++){
        character[i]=word[i]-'a';
        
    }

    for(int i=0;i<n;i++){
        area[i]=h[character[i]];
        //cout<<character[i]<<endl;
    }

    int max= find_max(area,n);
    //cout<<"Max "<<max<<endl;
    return max*n;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp_temp;
    getline(cin, h_temp_temp);

    vector<string> h_temp = split_string(h_temp_temp);

    vector<int> h(26);

    for (int i = 0; i < 26; i++) {
        int h_item = stoi(h_temp[i]);

        h[i] = h_item;
    }

    string word;
    getline(cin, word);

    int result = designerPdfViewer(h, word);

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

