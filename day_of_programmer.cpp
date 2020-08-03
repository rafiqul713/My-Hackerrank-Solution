#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.

bool is_leap_year(int year){
   return (year%100!=0||year%400==0)&&(year%4==0); 
}



string dayOfProgrammer(int year) {
    int feb=0;
    if(year==1918){
        feb=15;
    }
    else if(year<1918){
        if(year%4==0){
            feb=29;
        }
        else{
            feb=28;
        }
    }
    else if(year>1918){
        feb=is_leap_year(year)?29:28;
    }
    int num_of_days=31+feb+31+30+31+30+31+31;
    int day=256-num_of_days;
    return to_string(day)+"."+"0"+to_string(9)+"."+to_string(year);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

