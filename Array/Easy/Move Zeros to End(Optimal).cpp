# include <bits/stdc++.h>
using namespace std;  
int moveZeros(int n,int arr[])
{
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    if(j==-1)
    {
        cout<<"all are non zero element in the array"<<endl;
    }
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
 return arr[n];
}
int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    moveZeros(n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}  