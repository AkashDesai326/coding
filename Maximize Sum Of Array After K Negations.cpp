/*
https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/
*/

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int k) {
        int i=0,sum=0;
        i = 0;
        
        int mini = INT_MAX, ind;
        sort(A.begin(), A.end());
        for(i=0; i<A.size(); i++)
        {
            if(k==0)
                break;
            else if(A[i] < 0)
            {
                A[i] = -A[i];
                k--;
            }
            
            if(mini > A[i]) 
            {
                mini = A[i];
                ind = i;
            }
        }
        if(k & 1)
        {
            
            {A[ind] = -A[ind];}
        }
        for(i=0;i<A.size();i++)
        {    
            sum=sum + A[i];
            cout << A[i] << " ";
        }
        return sum;   
    }
};
