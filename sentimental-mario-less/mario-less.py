from cs50 import get_int

while True:
    n = get_int('height: ')
    if n > 0 and n < 9:
        break

for i in range(n):
    for j in reversed(range(n - 1)):
        print('#', end='')
    print()
