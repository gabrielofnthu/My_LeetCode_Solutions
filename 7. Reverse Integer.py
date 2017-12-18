class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        front = 10;
        back = 1;
        i = 1;
        answer = 0;
        numberlimit = 2147483647;
        
        if(x < 0):
            flag = -1;
            x = -1 * x;
        else:
            flag = 1;

        while(i <= x):
    
            i = i * 10;
        
        i = i / 10;

        while(x >= back):
    
            new_digit = ((x % front) - (x % back)) / back;
            answer = answer + new_digit * i;
    
            i = i / 10;
            front *= 10;
            back *= 10;
        
        if(answer > numberlimit or answer < (numberlimit * -1)):
			return 0;
        else:
            return flag * answer;