data = [78,48,10,3,36,37,43,16,34,45,25,38,72,36,53,6]

for i in range(1, len(data)):
    key = data[i]
    j = i-1
    while j >= 0 and data[j] > key:
        data[j+1] = data[j]
        j -= 1
    data[j+1] = key
    print(f"Iterasi {i}: {data}")

print("Hasil:", data)