// class Solution {
// public:
//     int findMinDifference(vector<string>& timePoints) {
//         vector <int> minute;
//         for(int i =0; i < timePoints.size(); i++){
//             string current = timePoints[i];
//             int hours = stoi (current.substr(0, 2));
//             int min = stoi (current.substr(3, 2));
//             int total = hours*60 + min ;

//             minute.push_back(total);
//         }
//         sort(minute.begin(), minute.end());

//         int mini = INT_MAX;
//         int n = minute.size();

//         for(int i =0; i<n-1; i++){
//             int diff = minute[i+1] - minute[i];
//             mini = min(mini, diff);
//         }
//         int lastDiff = (minute[0] + 1440 ) - minute[n-1];
//         mini = min(mini, lastDiff);
//             return mini;
//     }
// };