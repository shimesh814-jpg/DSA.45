# include <iostream>
using namespace std ;
int main()
{
    int num,lastdigit;
    cout<<"enter the number:"<<endl;
    cin>>num;
    int count=0;
    while(num>0)
    {
      lastdigit = num%10;
      count++;
      num=num/10;
    }
    cout<<count;
}