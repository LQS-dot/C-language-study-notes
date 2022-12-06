#!/usr/bin/env python
# -*- coding: utf-8 -*-

from dataclasses import dataclass
import math

# @dataclass(order=True, frozen=True) b.age = 50
@dataclass(order=True)
class A:
    name: str
    var: int = 3
    def __post_init__(self): ## this func after __init__
        self.deci, self.int = math.modf( self.var )

#a = A(2,3)
#b = A(2,4.4)
#
#print(b.deci, b.int)
#
#
#class Float:
#    def __init__(self, vul=0):
#        self.vul = vul
#        self.process()
#
#    def process(self):
#        self.decimal, self.int = math.modf(self.vul)
#
#
#f = Float(2.2)
#print(f.decimal, f.int)


@dataclass
class B(A):
    age: int = 1

b = B("lqs",12,13)
print(b)
print(b.name,b.age, b.var)
