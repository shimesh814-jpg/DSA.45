# include<iostream>
using namespace std;
int main()
{
      int num;
      cin>>num;
      int dup = num;
       int revnum = 0;
       while(num>0)
       {
        int lastdigit=num%10;
         revnum = (revnum * 10)+lastdigit;
         num =num/10;    
       }
       if(dup==revnum)
       {
       cout<< "Palindrone"<<endl;
       }
       else 
       {
        cout<<"not palindrome:";
       }
       return 0;
} 