from cs50 import get_int

while True:
    n = get_int('height: ')
    if n > 0 and n < 9:
        break

for i in range(n):
    for i in range(n - 1):
        print('#', end='')
        i -= 1
    print()
