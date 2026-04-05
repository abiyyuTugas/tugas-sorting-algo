data = [78,48,10,3,36,37,43,16,34,45,25,38,72,36,53,6]

n = len(data)
for i in range(n):
    for j in range(0, n-i-1):
        if data[j] > data[j+1]:
            data[j], data[j+1] = data[j+1], data[j]
    print(f"Iterasi {i+1}: {data}")

print("Hasil:", data)