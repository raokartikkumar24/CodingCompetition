X = int(input())
Y = int(input())
Z = int(input())
N = int(input())



xi = [i for i in range(0,X+1)]
yi = [i for i in range(0,Y+1)]
zi = [i for i in range(0,Z+1)]



lip = [[x,y,z] for x in xi for y in yi for z in zi if x+y+z != N]

print(lip)





