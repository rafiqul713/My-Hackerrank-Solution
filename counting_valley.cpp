#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int up=0;
    int down=0;
    int num_of_valley=0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='U'){ //Up
            up++; 
        }
        else if(s[i]=='D'){ //Down
            down++;
        }

        if(up==down && s[i]=='U'){ // reach sea level
            num_of_valley++;
        }

        //cout<<"Number of valley "<<num_of_valley<<endl;
    }

    //cout<<"Number of valley final "<<num_of_valley<<endl;

    return num_of_valley;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

