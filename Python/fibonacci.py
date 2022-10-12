def fibonacci(n):
    l=[]
    for i in range(n):
        if(i==0):
            l.append(0)
        elif(i==1):
            l.append(1)
        else:
            l.append(l[i-1]+l[i-2])
    return l
    # return a list of fibonacci numbers

if __name__ == '__main__':
    n = int(input())#number of terms
    print(fibonacci(n))	