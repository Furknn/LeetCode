class Solution {
    public String restoreString(String s, int[] indices) {
        char strArr[] = new char[s.length()];
    
        for(int i=0; i < s.length(); i++)
        {
            strArr[indices[i]] = s.charAt(i);        
        }  
    
        return String.valueOf(strArr);
    }
}
