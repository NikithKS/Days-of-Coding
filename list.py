def mergeInBetween(list1, list2, a, b):
    for i in list1[:a]:
        print(i)
    for i in list2:
        print(i)
    for i in list1[b:]:
        print(i)


list1 = [1, 4, 6, 3, 2, 7]
list2 = [5, 6, 4, 3, 8 , 2, 1]
mergeInBetween(list1, list2, 2, 4)