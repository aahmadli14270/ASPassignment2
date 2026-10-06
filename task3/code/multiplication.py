import numpy as np
import time

matrix1 = np.array([[2, 2], [4, 4]])
matrix2 = np.array([[6, 6], [8, 8]])

start = time.perf_counter()

result = matrix1 @ matrix2

end = time.perf_counter()

print(result)

assert result[0][0] == 28
assert result[0][1] == 28
assert result[1][0] == 56
assert result[1][1] == 56

print("TESTS ALRIGHT")
print("nanoseconds:", (end - start) * 1000000000)