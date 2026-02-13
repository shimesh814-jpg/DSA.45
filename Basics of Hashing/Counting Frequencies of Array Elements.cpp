# include <iostream>
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
    int hash[8] ={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
     
    int q;
    cout<<"Enter the value of Quries:"<<endl;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        //fetch
        cout<<"Frequency is:"<<hash[number]<<endl;
    }
    return 0;
}