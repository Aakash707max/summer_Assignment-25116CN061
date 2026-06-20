def multiply_matrices(a, b):
    if len(a[0]) != len(b):
        raise ValueError("Matrix dimensions do not allow multiplication")
    result = [[0] * len(b[0]) for _ in range(len(a))]
    for i in range(len(a)):
        for j in range(len(b[0])):
            for k in range(len(b)):
                result[i][j] += a[i][k] * b[k][j]
    return result

a = [[1, 2, 3], [4, 5, 6]]
b = [[7, 8], [9, 10], [11, 12]]
print(multiply_matrices(a, b))