# include <iostream>
# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n ;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array :"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //precompute
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    // iterate in map
    for (auto it : mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
     
    int q;
    cout<<"Enter the value of Quries:"<<endl;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        //fetch
        cout<<"Frequency is:"<<mpp[number]<<endl;
    }
    return 0;
}