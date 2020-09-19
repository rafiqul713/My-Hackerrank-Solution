#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int len=arr.size();
    int current_sum;
    int i,j;
    i=0;
    j=0;
    int max=(arr[i][j]+ arr[i][j+1]+ arr[i][j+2] + arr[i+1][j+1]+
            arr[i+2][j]+ arr[i+2][j+1]+ arr[i+2][j+2]);
    for(i=0;i<len-2;i++){
        for(j=0;j<len-2;j++){
            current_sum= (arr[i][j]+ arr[i][j+1]+ arr[i][j+2] + arr[i+1][j+1]+
            arr[i+2][j]+ arr[i+2][j+1]+ arr[i+2][j+2]);
            if(current_sum>max){
                max=current_sum;
            }
        }
    }
    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

