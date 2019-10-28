from math import log

x = log(2)
for i in range(3, 7):
  x = log(i)**x
  
print(x) # approximates PI to 4 digits
