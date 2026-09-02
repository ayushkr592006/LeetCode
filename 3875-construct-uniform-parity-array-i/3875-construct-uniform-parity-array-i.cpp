class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        return true;
//         int n=nums1.size();
//         vector<int>nums2;
//         //odd ke liye
//         for(int i=0;i<n;i++){
//             if(nums1[i]%2!=0)nums2.push_back(nums1[i]);
//             else{
//                 int c=0;
//                 for(int j=0;j<n;j++){
//                     if(j!=i && (nums1[i]-nums1[j])%2!=0){
//                         nums2.push_back(nums1[i]-nums1[j]);
//                         c++;
//                         break;
//                     }
                
                
//             }
//             if(c==0)break;
//         }
//         }
//     if(nums2.size()==n)return true;
//             nums2.clear();


//     for(int i=0;i<n;i++){
//             if(nums1[i]%2==0)nums2.push_back(nums1[i]);
//             else{
//                 int d=0;
//                 for(int j=0;j<n;j++){
//                     if(j!=i && (nums1[i]-nums1[j])%2==0){
//                         nums2.push_back(nums1[i]-nums1[j]);
//                         d++;
//                         break;
//                     }
//                 }
//                 if(d==0)break;
//             }
//         }

// if(nums2.size()==n)return true;
// return false;

    }
};