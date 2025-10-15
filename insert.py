import numpy as np
###INSERT
"""
np.insert(array,index,value,asix=nome)
array-original array
index
value
axis=0,row-wise
axis=1,cloumn-wise
"""

# arr=np.array([10,20,30,40])
# print(arr)
# nw_arr=np.insert(arr,2,100)
# print(nw_arr)
# nw_arr=np.insert(arr,4,10)
# print(nw_arr)

###INSERT IN 2D
# arr=np.array([[1,2],[3,4]])
# new_arr=np.insert(arr,1,[5,6],axis=0)
# print(new_arr)
# print(arr.shape)
# new_arr=np.insert(arr,1,[5,6],axis=1)
# print(new_arr)
# print(arr.shape)

# APPEND
##ARR=np.array([10,20,30])
# newarr=np.append(ARR,[40,50,60])
# print(newarr)

#concadinate= join two array
"""
np.concatenate((array1,array2),axis=0)
axis 0 >vertical stacking
axis 1 > horizontal staking
"""
## arr1=np.array([1,3,6])
## arr2=np.array([5,8,0])
## newarr=np.concatenate((arr1,arr2),axis=1)
## print(newarr)

##DELETE
# arr=np.array([1,3,5])
# ne=np.delete(arr,0)
# print(ne)

###DELETE 2D ARRAY
# arr=np.array([[1,2],[5,7]])
# new=np.delete(arr,0,axis=1)
# print(new)
# new=np.delete(arr,0,axis=0)
# print(new)

##STACKING =combining 1,2 array
""" vertically
    horizontally
vstack() row wise
hstack()column wise
    """
    
# arr1=np.array([1,3,6])
# arr2=np.array([5,8,0])

## print(np.vstack((arr1,arr2)))
## print(np.hstack((arr1,arr2)))

#SPLLITING=dividing arrayas single into multiple array
"""np.split() ##equal
np.hsplit()
np.vsplit()"""
# arr=np.array([1,3,6,7,8,3,4,0,5,1])
# print(np.split(arr,10))
# print(np.hsplit(arr,2))
# print(np.vsplit(arr,))
