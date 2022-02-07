print ('Hello World')

import sys
MAX_INT = sys.maxsize
print(MAX_INT)
arr=[2,1,3,2,3,4,5,1,2,8]
mj=[MAX_INT]*(len(arr))#min jump array
mj[0]=0#necessary
jpath=[-1]*len(arr)# jump path array

for i in range(len(arr)):
    j=0
    while(j<i):
        print(arr[j],(i-j))
        if(arr[j]>=(i-j)):
            print("hii")
            temp=mj[j]+1
            print(temp,mj[i])
            if(temp<mj[i]):
                mj[i]=temp
                jpath[i]=j
        j+=1
                

print(mj)
print(jpath)

ans=[]
      

pos=len(arr)-1
while not  pos==-1:
    ans.append(pos)
    pos=jpath[pos]
ans=ans[::-1]
print(ans)#actual route to reach end of array with minimum jumps
for i in ans:
    print(arr[i],end='\t')
        
