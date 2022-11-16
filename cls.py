#!/usr/bin/env python3.10
# -*- coding: utf-8 -*-

class LQS(object):
    def __new__(cls,*args,**kwargs):
        # return super(LQS, cls).__new__(cls)
        if "add" not in cls.__dict__.keys():
            raise TypeError("oh shit!!")
        return object.__new__(cls)

    def __init__(self,*args,**kwargs): # new args to init func
        print(locals())
        pass

class SMY(LQS):
    def add(self):
        pass

smy=SMY(1)



class ZY(type):
    def __new__(cls, name, bases, attrs, **kwargs):
        print(kwargs)
        if "redu" not in attrs.keys():
            raise TypeError("oh shit metaclass")
        return super().__new__(cls, name, bases, attrs)

    def __init__(self,name, bases,attrs,**kwargs):
        print(kwargs)
        pass

class LQ(metaclass=ZY,a=1):
    def redu(self):
        pass

LQ()

