//                                    -------------LEETCODE PROBLEM 724-----------------

// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         for(int i = 0; i < nums.size(); i++){
//             int lsum = 0, rsum = 0;

//             for(int j = 0; j < i; j++){
//                 lsum = lsum + nums[j];
//             }

            // for(int j = i+1; j < nums.size(); j++) //------- Right answer but takes too much memory and time
//                 rsum = rsum + nums[j]; 
//             }

//             if(lsum == rsum){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };


