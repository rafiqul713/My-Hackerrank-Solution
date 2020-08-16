#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
     
     int result=0;
     int turn_from_first,turn_from_last;
     turn_from_first= (p-1);
     turn_from_last= (n-p);
    if(p==1 || p==n){
        return 0;
    }

    if(n-p==0){
         return 0;
    }
    else if(n-p==1){
         if(n%2==0){
             return 1;
         }
         else{
             return 0;
         }
    }
    
    else{
         
        int temp;
        if(p%2==1){
                p=p-1;
        }
        
        if(turn_from_last>turn_from_first){
            temp=0;
            while(temp!=p){
                temp+=2;
                result++;
            }    
        }

         else{
            temp=n;
            while(temp!=p){
                temp-=2;
                result++;
            }
        } 
    }

     return result;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

