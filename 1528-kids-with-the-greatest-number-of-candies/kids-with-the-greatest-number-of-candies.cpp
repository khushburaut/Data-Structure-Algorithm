class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maxCandies = 0;
        
        // Find maximum
        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] > maxCandies)
            {
                maxCandies = candies[i];
            }
        }
        
        // Check each child
        vector<bool> ans;
        
        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] + extraCandies >= maxCandies)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        
        return ans;
    }
};