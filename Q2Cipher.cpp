

#include <bits/stdc++.h>
using namespace std;


int solution(vector<int>& arr, int x)
{
  
    int closestSum = INT_MAX;

    
    for (int i = 0; i < arr.size() ; i++) 
    {
        for(int j =i + 1; j < arr.size(); j++)
        {
            for(int k =j + 1; k < arr.size(); k++)
            {
                //update the closestSum
                if(abs(x - closestSum) > abs(x - (arr[i] + arr[j] + arr[k])))
                    closestSum = (arr[i] + arr[j] + arr[k]);
            } 
        }
    }
    
    return closestSum;
}

// Driver code
int main()
{
    vector<int> arr ;
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int target;
    cin>>target;
    cout << solution(arr, target);

    return 0;
}