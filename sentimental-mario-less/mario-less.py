from cs50 import get_int

while True:
    n = get_int('height: ')
    if n > 0:
        break
for i in range(n - 1):
    print('#')
