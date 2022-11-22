#!/usr/bin/env python
# -*- coding: utf-8 -*-

from queue import Queue
from threading import Thread
import time

qObj = Queue(maxsize=20)

#def work():
#    while True:
#        if not qObj.empty():
#            item = qObj.get()
#            time.sleep(item)
#            qObj.unfinished_tasks -= 1
#            print(qObj.unfinished_tasks)
#        else:
#            print("empty")
#            time.sleep(1)
#
#
#Thread(target=work,daemon=True).start()
#
#time.sleep(2)
#for i in range(50):
#    print ("i = {}".format(i))
#    qObj.put(i,block=True,timeout=5) # oh wait or not await
#
#
#qObj.join()


with open("README.md","rb") as fp:
    fp.seek(0)
    data = fp.read(1)
    qObj.put(data)
    while data:
        tex = qObj.get()
        print(tex)
        time.sleep(1)
        print(fp.tell())
        data = fp.read(1)
        if data:
            qObj.put(data)
            print(qObj.qsize())
        else:
            #qObj.unfinished_tasks = 0
            pass


qObj.join()

