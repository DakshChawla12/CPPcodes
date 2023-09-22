#include <iostream>
using namespace std;
// function to reverse a string using recursion
// void reverse(string &s,int i,int j){
//     if(i>j){//base case
//         return;
//     }
//     swap(s[i],s[j]);//solving one case
//     i++;
//     j--;

//     reverse(s,i,j);//recursive call
// }
//**************************************
//function to check palindrome string
// bool checkpalindrome(string s,int i,int j){
//     if(i>j){//base case
//         return true;
//     }

//     if(s[i] != s[j]){//solving one case
//         return false;
//     }
//     else{
//         return checkpalindrome(s,i+1,j-1);//recursive call
//     }
// }
//*********************************************
//function to find a raised to power b using recursion
// int power(int a, int b){

//     if(b == 0){ //1st base case
//         return 1;
//     }
//     if(b == 1){ //2nd base case
//         return a;
//     }

//     int ans = power(a,b/2); //recursive call

//     if(b%2 == 0){ //for even power
//         return ans*ans;
//     }
//     else{ // for odd power
//        return a * ans*ans;
//     }
// }
//*******************************************
//function for doing bubble sort using recursion
void sortarray(int arr[],int n){
    if(n ==0 || n == 1){  // base case
        return;
    }

    for(int i =0; i < n-1; i++){ //solving one case ---> largest element ko end may daaldega
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    sortarray(arr,n-1);

}
int main(){

    string name = "racecar";

    //first function call
    // reverse(name,0,name.length()-1);
    // cout<<name<<endl;

    //second function call
    // bool ispalindrome = checkpalindrome(name,0,name.length()-1);
    // if(ispalindrome){
    //     cout<<"yes";
    // }
    // else{
    //     cout<<"no";
    // }

    //function call 3
    // int a,b;
    // cin>>a>>b;

    // int ans = power(a,b);
    // cout<<"answer is : "<<ans;

    //function call 4
    int arr[5] = {4,3,1,2,0};
    sortarray(arr,5);
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}