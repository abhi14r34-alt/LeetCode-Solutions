class Solution {
public:
    bool isPalindrome(int x) {
         int pal = 0;
    int temp=x;
    if (x<0) return false;
    while (x > 0)
    {
        int digit = x % 10;
      if (pal > INT_MAX/10 || pal < INT_MIN/10) return 0;
        pal = pal * 10 + digit;
        x/=10;
    }
    
    return (pal==temp);
 
}
    
};