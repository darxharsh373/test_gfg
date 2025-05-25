#User function Template for python3
arr = tuple(map(int, input().split()))

########### Write your code below ###############
# Print "True" if all elements of tuple are different, otherwise print "False"
print("True" if len(arr)==len(set(arr)) else "False")
########### Write your code above ###############