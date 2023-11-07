class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int first=0;
        int n=numbers.size();
        int last=n-1;
        while(first<=last){
            if(numbers[first]+numbers[last]>target){
                last--;
            }
            else if(numbers[first]+numbers[last]<target)
            first++;
            else if(numbers[first]+numbers[last]==target)
            break;
        }
        vector<int>v;
        v.push_back(first+1);
        v.push_back(last+1);
        return v;
    }
};
