#include <iostream>
#include <string>
#include <vector>
using namespace std;


// void solve(string s,vector<int>&answer,int index){
//     if(index == s.length()){
//         return;
//     }
// int ele;
//     for(int i = 0; i < s.length(); i++){
//         ele = s[i]-'0';
//         answer.push_back(ele);
//     }

//     solve(s,answer,index+1);
// }


int solve(string str, int index){
    int sign = 1;
    if(index == str.length()){
        return 0;
    }
    int current = str[index] - '0';
    int next = solve(str,index+1);
    

    
    return current+next*10;

}

int reverseInteger(int num) {
    int reversedNum = 0;

    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return reversedNum;
}

int main(){

    string s;
    cin>>s;

    int index = 0;
    int ans =  (solve(s,index));
    int ans1 = reverseInteger(ans);


    
    cout<<ans1;
    return 0;

}