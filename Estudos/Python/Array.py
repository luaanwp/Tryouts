import numpy as np
num = [1, 2, 3, 4, 5]
num_multiply = []
for n in num:
    num_multiply.append(2*n)
print (num_multiply)

num_2 = [x*2 for x in num]
print (num_2)


#Array 
a = np.array(num)
a2 = 2*a
print (a2)