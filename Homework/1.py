import sys
import os
import time
print("Ok, please wait a minute..., I will generate the file for you.")
fileName = str(time.strftime("%Y-%m-%d-%H.%M.%S",time.localtime(time.time()))+"."+sys.argv[1])
zhailu1 = open(fileName,'w')
print("perfect, I will generate the file called " + fileName + " for you.")