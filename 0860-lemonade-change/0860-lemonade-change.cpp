class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int change=0;
        int cnt=0;
        int pnt=0;


   for(int i=0;i<bills.size();i++){

    if(bills[i]==5) {change+=5;
    cnt++;}
    
          else if(bills[i]==10 && change>=5 && cnt>=1){
            cnt--;
             change+=5;
             pnt++;
     
          }
          
else if(bills[i] == 20 &&
       ((pnt >= 1 && cnt >= 1) || (cnt >= 3))){


           if(pnt >= 1 && cnt >= 1){
            pnt--;
            cnt--;
           }
           else cnt-=3;

          change+=5;
     
          }
else return false;


   }
return true;

    }
};