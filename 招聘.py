#!/usr/bin/env python
# coding=utf-8
a,b,c,d=input().split()
a=int(a)
b=int(b)
c=int(c)
d=int(d)
flag=1
if not (a>=1 or b<=50):
    flag=0
elif not (c<=25 or d>=5):
    flag=0
else:
    pass
if flag:
    print('ok')
else:
    print('pass')

