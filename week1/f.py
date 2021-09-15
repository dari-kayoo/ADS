N = input()
print (N)
 
M={'(':')','[':']','{':'}'}
stack=[]
flag=0
 
for i in N:
    if i=='(' or i=='[' or i=='{': stack.append(i)
    if (i==')' or i==']' or i=='}') and (len(stack)==0 or i!=M[stack[(len(stack)-1)]]):
        flag=1
        break
    if (i==')' or i==']' or i=='}') and i==M[stack[(len(stack)-1)]]:
        stack.pop()
        continue
    
 
if flag==1 or len(stack)>0:
    print ("Неправильная последовательность скобок")
else:
    print ("Правильная последовательность скобок")
