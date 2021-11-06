def search(item,arr):
    for i in range(0,len(arr)):
        if arr[i] == item:
            return i
    return -1

def bsearch(arr, item,start,end):
  if end-start == 1:
    if arr[start] == item:
        return start
    else:
        return -1

  mid = int( (end-start) / 2)

  if arr[start+mid] > item:
    return bsearch(arr, item, start, end-mid)
  else:
    return bsearch(arr, item, start+mid, end)

def insert(item,arr):
    arr.append(item)
    return arr

def delete(item,arr):
    arr.remove(item)
    return arr

arr = [1, 3, 4, 6, 8, 9, 12, 14, 16, 17, 27, 33, 45, 51, 53, 63, 69, 70]
item = 16
print("[+] Index of %s (Binary search): "%(item) + str(bsearch(arr, item,0,len(arr))))

print("[+] Index of %s (Normal search): "%(item) + str(search(item,arr)))

lst = ["a","b","c","d"]

i=insert("e",lst)
print("[+] new arr: ",i)

d=delete("a",lst)
print("[+] nwe arr: ",d)
