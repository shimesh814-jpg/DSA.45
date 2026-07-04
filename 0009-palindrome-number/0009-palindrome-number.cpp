class Solution {
public:
    bool isPalindrome(int x) {
        int remainder ,  original  ;
        long reverse=0;
        original=x;
         if(x<0){
            return false;
        }
        while(x!=0)
        {
            remainder = x%10;
            reverse = ((reverse*10) + remainder);
            x=x/10;
        }
        if(original==reverse)
        {
            
			cout<<original<<"is a palindrome";
            return true;
        }
        else
        {
            cout<<original<<"is not a palindrome";
            return false;
        } 
    
        
    }
};
