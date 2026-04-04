# include <bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n,int d){
    reverse(arr ,arr+d);
    reverse(arr+d, arr+n);
    reverse(arr , arr+n); 
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
    int d;
    cout<<"Enter the value of d"<<endl;
    cin >> d;
    leftRotate(arr,n,d);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}