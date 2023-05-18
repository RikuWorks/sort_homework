#include <iostream>
#include <vector>

using namespace std;

vector<int> bucketSort(vector<int>arr)
{
    int n = 0;
    n=arr.size();
    vector<int> array(n);
    int max=0;
    for (int i = 0; i < n; i++)
    {
        array[i]=arr[i];
        if(array[i]>=max)max=array[i];
    }
    max++;
    vector<int>bucket(max,0);
    
    for (int i = 0; i < n; i++)
    {
        bucket[array[i]]++;
    }

    for(int i = 0; i < max; i++)
    {
       int temp = bucket[i];
       for(int j=0;j<temp;j++)
       {
        cout<<i;
       }
    }
    return bucket;
}

int main()
{
    int n=0;
    cin>>n;
    vector<int>array(n);
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    
}