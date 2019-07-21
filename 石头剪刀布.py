#!/usr/bin/env python
# coding=utf-8
x,y=input().split()
dic={'O':1,'Y':2,'H':3}
x=dic[x]
y=dic[y]
if x == y:
    print('TIE')
elif x==1 and y==2 or x==2 and y==3 or x==3 and y==1:
    print('MING')
else:
    print('LI')
