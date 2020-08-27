#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.
int utopianTree(int n) {
    if(n==0){
        return 1;
    }

    int init=1;
    int i=1;
    int total=init;
    while(i<=n){
        if(i%2==0){
            total+=1;
        }
        else if(i%2==1){
            total=(total*2);
        }

        cout<<"Total "<<total<<endl;

        i++;
    }

    return total;

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

        int result = utopianTree(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

