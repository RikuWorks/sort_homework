#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<int> array(n);
    int max=0;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
        if(array[i]>=max)max=array[i];
    }
    max++;
    vector<int>tempArray(max,0);
    
    for (int i = 0; i < n; i++)
    {
        tempArray[array[i]]++;
    }

    for(int i = 0; i < max; i++)
    {
       int temp = tempArray[i];
       for(int j=0;j<temp;j++)
       {
        cout<<i;
       }
    }
    return 0;
}