class Solution {
public:
    bool isSameAfterReversals(int num) {
        string str = to_string(num);
        int temp = num;
        int j = str.length() - 1;
        
        while (j >= 0)
        {
            if (str[j] == '0')
                temp /= 10;
            else
                break;
            
            j--;
        }
        
        str = to_string(temp);
        
        string rev1 = "";
        string rev2 = "";
        
        for (int i = str.length() - 1; i >= 0; i--)
        {
            rev1 += str[i];
        }
        
        for (int i = rev1.length() - 1; i >= 0; i--)
        {
            rev2 += rev1[i];
        }
        
        return (rev2 == to_string(num));
        
        
    }
};
