#include <bits/stdc++.h>
#include<vector>
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
     int position;
    vector<string>str;
    int f_am,f_pm;
    bool AM=false;
    bool PM=false;
    f_am=s.find("AM");
    f_pm=s.find("PM");
    if(f_am!=string::npos){
        
        AM=true;
    }
    else if(f_pm!=string::npos){
        
        PM=true;
    }
    while(((position=(s.find(":")))!=-1) || ((position=(s.find("AM")))!=-1) || ((position=(s.find("PM")))!=-1) ){
        
        
        string tok=s.substr(0,position);
        str.push_back(tok);
        s.erase(0,position+1);
    }
    int hr,min,sec, res_hr, res_min, res_sec;
    hr=stoi(str[0]);
    min=stoi(str[1]);
    sec=stoi(str[2]);
    
    
    if(AM==true){
        
        if(hr<12){
            res_hr=hr;
            
        }
        
        else if(hr>=12){
            res_hr=hr-12;
            
        }
        
        res_min=min;
        res_sec=sec;

        
    }

    else if(PM==true){
        cout<<"PM"<<endl;
        if(hr<12){
           res_hr=hr+12;
        }

        else if(hr==12){
            res_hr=hr;
        }
        
        res_min=min;
        res_sec=sec;
       
    }
    string result="";
    string temp;
    if(res_hr<10){ 
        //temp="0"+to_string(res_hr)+":";
        result+="0"+to_string(res_hr)+":";
    }
    else{
        //temp=to_string(res_hr)+":";
        result+=to_string(res_hr)+":";
    }

    if(res_min<10){
        //temp="0"+to_string(res_min)+":";
        result+="0"+to_string(res_min)+":";
    }
    
    else{
        //temp=to_string(res_min)+":";
        result+=to_string(res_min)+":";
    }

    if(res_sec<10){
        //temp="0"+to_string(res_sec);
        result+="0"+to_string(res_sec);
    }
    else{
        //temp=to_string(res_sec);
        result+=to_string(res_sec);
    }

    
    return result;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

