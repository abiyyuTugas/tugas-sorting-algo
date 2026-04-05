def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr)//2]
    kiri = [x for x in arr if x < pivot]
    tengah = [x for x in arr if x == pivot]
    kanan = [x for x in arr if x > pivot]
    hasil = quick_sort(kiri) + tengah + quick_sort(kanan)
    print("Proses:", hasil)
    return hasil

data = [78,48,10,3,36,37,43,16,34,45,25,38,72,36,53,6]
hasil = quick_sort(data)
print("Hasil:", hasil)