class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int temp=INT_MAX;
        int ans=-1;
        for(int i=0;i<drones.size();i++){
           
        if( (abs(target[1]-drones[i][1])+abs(target[0]-drones[i][0]))<=drones[i][2] ){
                
                  if((abs(target[1]-drones[i][1])+abs(target[0]-drones[i][0])) <temp ){
temp=abs(target[1]-drones[i][1])+abs(target[0]-drones[i][0]);
               ans=i;
                    
                  }

        }
              
        }
        return ans;
    }
};