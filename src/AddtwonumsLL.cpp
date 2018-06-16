#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {

        vector<vector<int> > ans;
        sort(num.begin(), num.end());

    for (unsigned int i = 0; i < num.size(); i++) {

        int target = -num[i];
        int front = i + 1;
        int back = num.size() - 1;

        while (front < back) {

            int sum = num[front] + num[back];

            if (sum < target)
                front++;
            else if (sum > target)
                back--;
            else {
                vector<int> V(3,0);
                V[0] = num[i];
                V[1] = num[front];
                V[2] = num[back];
                ans.push_back(V);

                while (front < back && num[front] == V[1])
                    front++;
                while (front < back && num[back] == V[2])
                    back--;
            }

        }
        while (i + 1 < num.size() && num[i + 1] == num[i])
            i++;

    }

    return ans;

}


};
