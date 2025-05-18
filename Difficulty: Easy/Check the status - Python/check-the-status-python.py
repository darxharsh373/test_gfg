#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends

class Solution:
    def checkStatus(self, a, b, flag):
        if flag:
            return a<0 and b<0
        else:
            return (a<0<=b) or(b<0<=a)
          


#{ 
 # Driver Code Starts.

# Driver Code
def main():
    
    # Testcase input
    testcases = int(input())
    
    # Looping through testcases
    while(testcases > 0):
        a = int(input())
        b = int(input())
        flag = input()
        
        if(flag == "True"):
            flag = True
        else:
            flag = False
        
        if(Solution().checkStatus(a, b, flag) is True):
            print ("True")
        else:
            print ("False")
        
        testcases -= 1
        print("~")
 
if __name__ == '__main__':
    main()
# } Driver Code Ends