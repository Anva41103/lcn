
class Solution {
    void merge( vector<vector<int>>& meetings)
    {
        sort(meetings.begin(),meetings.end());
        int i=0;
        vector <vector <int>> temp;
        for(auto it: meetings)
        {
            if(temp.empty()||temp.back()[1]<it[0])
            {
                temp.push_back(it);
            }
            else
            {
                temp.back()[1]=max(temp.back()[1],it[1]);
            }
        }
        meetings=temp;
        for(auto it:temp) cout<<it[0]<<it[1];
    }
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        merge(meetings);

        // Initialize the count of free days
        int freeDays = 0;
        
        // Check for free days before the first meeting
        if (!meetings.empty() && meetings[0][0] > 1) {
            freeDays += (meetings[0][0] - 1);
        }

        // Check for free days between the merged meetings
        for (size_t i = 1; i < meetings.size(); ++i) {
            freeDays += (meetings[i][0] - meetings[i-1][1] - 1);
        }

        // Check for free days after the last meeting
        if (!meetings.empty() && meetings.back()[1] < days) {
            freeDays += (days - meetings.back()[1]);
        }

        // If there are no meetings, all days are free
        if (meetings.empty()) {
            freeDays = days;
        }

        return freeDays;
    }
};