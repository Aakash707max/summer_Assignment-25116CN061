def is_symmetric(matrix):
    rows = len(matrix)
    for i in range(rows):
        for j in range(rows):
            if matrix[i][j] != matrix[j][i]:
                return False
    return True

matrix = [[1, 2, 3], [2, 5, 6], [3, 6, 9]]
print(is_symmetric(matrix))