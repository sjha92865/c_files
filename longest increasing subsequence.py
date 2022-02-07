'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
print ('Hello World')
arr=[5,4,12,2,10,6,9,13,3,11,7,15]
length=[1]*(len(arr))
subs=[-1]*len(arr)
print(length)

for i in range(len(arr)):
    j=0
    while(j<i):
        if(arr[j]<arr[i]):
            if(length[i]<=length[j]+1):
                length[i]=length[j]+1
                subs[i]=j
        j+=1
                

print(subs)
print(length)
# max length of subsequence will be max value in length array,
#go to corressponding index in subsequence array and to find that subsequence

ans=[]
      
# inbuilt function to find the position of maximum 
maxpos = length.index(max(length))
pos=maxpos
while not  pos==-1:
    ans.append(pos)
    pos=subs[pos]
ans=ans[::-1]
print(ans)
for i in ans:
    print(arr[i],end='\t')
        
        
