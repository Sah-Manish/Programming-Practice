#  1 0 2
"""
[["#    #   #   #"],
 ["#    .   #   #"],
 ["#    #   .   #"],
 ["#    #   #   #"]]
or 
[#### #.## ##.# ####]
"""
test=int(input())
while(test):
    island_count=0
    N,M = map(int, input().split())
    #arr=[[0]*M for i in range(N)]
    arr=[]
    for i in range(N):
        x=input()
        ele=[]
        for i in x:
            ele.append(i)
        arr.append(ele)
    index=[]
    for i in arr:
        if(i=="#"*N):
            continue
        for x in range(M):
            if(i[x]==".")
    print(island_count)
   
    test-=1;






"""
3
3 3
###
#.#
###
3 3
###
#..
###
4 4
####
#.##
##.#
####

"""