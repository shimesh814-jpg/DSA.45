# include <iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;

    //pre compute
    int hash[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"Enter the Queries:"<<endl;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        //fetch
        cout<<"Frequencies is:"<<hash[c-'a']<<endl;
    }
    return 0;
}