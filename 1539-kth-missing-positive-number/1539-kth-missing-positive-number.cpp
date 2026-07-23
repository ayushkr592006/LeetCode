class Solution {
public:
int solve(int low,int high,vector<int>& arr, int k){

if(high==-1){
 
 return k;
}

if(low>high){
int ans= k-(arr[high]-(high+1));

    return arr[high]+ans;
}

int mid=(low+high)/2;
    int missing=arr[mid]-(mid+1);
 
 if(missing<k){
   return  solve(mid+1,high,arr,k);
 }

 return solve(low,mid-1,arr,k);



}


    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
       int low=0;
       
       int high=n-1;

       return solve(low,high,arr,k);







    }
};