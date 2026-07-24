class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int  m=nums1.size();
        int n=nums2.size();
        vector<int>nums;
  int i=0;
  int j=0;
  while(i<m || j<n){

    if( i<m &&  j<n && nums1[i]<=nums2[j]){
      nums.push_back(nums1[i]);
      i++;

    }
    else if(j<n && i<m &&nums2[j]<nums1[i]){
        nums.push_back(nums2[j]);
        j++;
    }
    else if(j<n){nums.push_back(nums2[j]);
    j++;}
    else if(i<m) {nums.push_back(nums1[i]);
    i++;}


  }

int z=nums.size();
if(z%2!=0)return nums[(z-1)/2];

int c=(z/2)-1;
int d=z/2;
return  ((nums[c]+nums[d])/2.0);

      





       // Brute force
        // vector<int>v(m+n,0);
        // for(int  i=0;i<m;i++){
        //   v[i]=nums1[i];
          
        // }
        // for(int  i=0;i<n;i++){
        //   v[i+m]=nums2[i];
          
        // }
        // sort(v.begin(),v.end());
        //     int c =(m+n)/2;; 
        //     int d=m+n;
            
        //  if((d)%2!=0){
       
        //   return v[c];
        //  }
        //  else{
        //     int a=v[c-1];
        //     int b=v[c];
        //      return ((a+b)/2.0);
        //  }
    }
};