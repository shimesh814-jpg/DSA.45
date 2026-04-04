# include <bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n,int d){
    d = d % n;

    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i] = arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d] =arr[i];
    }
    for(int i=n-d;i<n;i++)
    {
        arr[i] = temp[i-(n-d)];
    }
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