bool isPossible(vector <int> arr, int n, int m, int mid){


	int studentcount = 1;
	int pgsum = 0;
	for(int i = 0; i < n; i++){
		if(pgsum + arr[i] <= mid){
			pgsum += arr[i];
		}
		else{
			studentcount++;
			if(studentcount > m || arr[i] > mid ){
				return false;
			}
			pgsum = 0;
			pgsum = arr[i];
		}
	}
	return true;
}




	
long long ayushGivesNinjatest(int n, int m, vector<int> arr) 
{	
	int s = 0;
	int sum = 0;
	for(int i = 0; i  < n ; i++){
		sum = sum + arr[i];
	}

	int e = sum;
	int mid  = s+(e-s)/2;
	long long int ans  = -1;

	while(s <= e){
		if(isPossible(arr,n,m,mid)){
			ans = mid;
			e = mid-1;
		}
		else{
			s= mid + 1;
		}
		mid  = s+(e-s)/2;
	}
	return ans;
}