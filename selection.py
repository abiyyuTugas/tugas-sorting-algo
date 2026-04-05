data = [78,48,10,3,36,37,43,16,34,45,25,38,72,36,53,6]

for i in range(len(data)):
    min_idx = i
    for j in range(i+1, len(data)):
        if data[j] < data[min_idx]:
            min_idx = j
    data[i], data[min_idx] = data[min_idx], data[i]
    print(f"Iterasi {i+1}: {data}")

print("Hasil:", data)