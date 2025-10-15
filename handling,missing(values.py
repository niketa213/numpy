import numpy as np

###ISNAN
# arr=np.array([1,2,np.nan,4,np.nan,6])
# print(np.isnan(arr))

""" PRINT(np.nan == np.nan)
can we compare this or not
ans:no we can not compare this"""

###nan_to_num (array,nan=value) default=0
# arr=np.array([1,2,np.nan,4,np.nan,6])
# cleaned=np.nan_to_num(arr,nan=0)
# print(cleaned)

# arr=np.array([1,2,np.nan,4,np.nan,6])
# cleaned=np.nan_to_num(arr,nan=400)
# print(cleaned)

###INFINETY
# """np.isinf(array)"""
# arr=np.array([1,2,np.inf,4,-np.inf,6])
# print(np.isinf(arr))

# """replace"""
# arr=np.array([1,2,np.inf,4,-np.inf,6])
# print(np.isinf(arr))
# cleaned=np.nan_to_num(arr,posinf=10,neginf=1000)
# print(cleaned)


