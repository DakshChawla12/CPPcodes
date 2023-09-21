//rotate array k times




// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector <int> temp(nums.size());
//         for(int i = 0; i < nums.size(); i++){
//             temp[(i+k) % nums.size()] = nums[i];
//         }   
//         //copy temp into num vector
//         nums=temp;
//     }
// };



//******leetcode link
  /* https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqazc2YzBCWUo1YzJMZmZkZDVGakhuVFpyaVFiZ3xBQ3Jtc0trUjhUY21NQ3I3aFE3TTdtN1QzWkhmZEl5cjNqTGE2eHZkQnhmMDhVczBSeFlFdEpIczhMeGNvQTNwcV9QcnF1THpBOU9ZOGtpTEszd1UtMFZYdnNmT0F0UE5ybjI4Ym9NQ2VxVWMtTElDTVd6LXc5NA&q=https%3A%2F%2Fdrive.google.com%2Ffile%2Fd%2F11ACmTRSo_pblv9u_rNbDSUqIFA3UVy2b%2Fview%3Fusp%3Dsharing&v=Z7_nMTHROZo  */

// check if array is sorted and rotated

// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int count = 0;
//         int  n = nums.size();
//         for(int i = 1; i < n; i++){
//             if(nums[i-1] > nums[i]){
//                 count++;
//             }
//         }
//         if(nums[n-1] > nums[0]){
//             count++;
//         }
//             return count <= 1;
//     }
// };
//*****leetcode link
/*https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbEhEUHZzWkx1ZkdQWkVrRVRzVktfM1hhSG14QXxBQ3Jtc0tuako4MGlMQVZGYm5IV2RUVXBXdWt6bmsxXy0xWUFwS09PVm9HSHJrMEtzRHZDVXR2RjdZZk5OcTAwcDN2Z0JZenZhb0M1Tk5YUnI3dUpva3BIa3cwbUxsNGZ0cmpvUmZDZVhZaDRTMDY1WVhUOUdtUQ&q=https%3A%2F%2Fleetcode.com%2Fproblems%2Fcheck-if-array-is-sorted-and-rotated%2F&v=Z7_nMTHROZo
*/



#include<iostream>
using namespace std;

int getpivot(int arr[],int n){
  int s = 0;
  int e = n-1;
  int mid = s+(e-s)/2;

  while(s<=e){
    if(arr[mid]>=arr[0]){
      s= mid+1;
    }
    else{
      e = mid;
    }
    mid = s+(e-s)/2;
  }
  return s;
}

int main(){
  int arr[5] = {8,10,17,1,3};
  cout<<"the pivot is : "<<getpivot(arr,5)<<endl;
return 0;
}