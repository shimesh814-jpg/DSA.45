# include<iostream>
using namespace std;
int main()
{
      int num;
      cout<<"enter the value of num:"<<endl;
      cin>>num;
      int count;
       for(int i=1;i*i<=num;i++)
       {
        if(num%i==0)
        {
          count++;
          if((num/i)!=i)
          {
            count++;
          }
        }   
       }
       if(count==2)
       {
        cout << "prime number "<<endl;
       }
       else
       {
        cout<<"not Prime"<<endl;
       }
       return 0;
}