//

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Stack
{
public:
    vector<int> filter(vector<int> arr)
    {
        stack<int> filter;
        for (int i = 0; i < arr.size(); i++)
        {
            if (filter.empty())
            {
                filter.push(arr[i]);
            }
            else if (arr[i] >= 0)
            {
                if (filter.top() >= 0)
                {
                    filter.push(arr[i]);
                }
                else
                {
                    filter.pop();
                }
            }
            else
            {
                if (filter.top() < 0)
                {
                    filter.push(arr[i]);
                }
                else
                {
                    filter.pop();
                }
            }
        }

        vector<int> ans(filter.size());
        int i = ans.size() - 1;
        while (i >= 0)
        {
            ans[i] = filter.top();
            i--;
            filter.pop();
        }

        return ans;
    }
};

int main()
{
    Stack st;
    vector<int> arr = {2, 3, 5, -4, 6, -2, -8, 9};

    vector<int> ans = st.filter(arr);

    cout << "Filter array : ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}