#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector <int> v {1,2,3,4,4,4,4,4,4,4,4,4,4,4,7,8};
    int target = 4 ;
    auto ans = lower_bound(v.begin(), v.end(), target);
        cout<< " ans is  " << ans - v.begin() << endl;

    auto ans2 = upper_bound(v.begin(), v.end(), target);
    cout<< " ans is  " << ans2 - v.begin() << endl;
    
 return 0;
}