class Solution {
    public boolean isPalindrome(int x) {
        if(x<0){
            return false;
        }else if((0<=x)&&(x<=9)){
            return true;            
        }else if(x==reverseNumber(x)){
            return true;
        }else{
        return false;
        }
    }
    
    public int reverseNumber(int x) 
    { 
        int reverseNum = 0; 
        while(x > 0) 
        { 
            reverseNum = reverseNum * 10 + x % 10; 
            x = x / 10; 
        } 
        return reverseNum; 
    } 
}
