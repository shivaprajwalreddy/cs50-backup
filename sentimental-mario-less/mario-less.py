from cs50 import get_int

def main():
    while True:
        n = get_int('height: ')
        if n > 0 and n < 9:
            break

    for i in range(n):
        for j in range(n - 1):
            print(' ', end='')
        #row(i + 1)
        n -= 1

"""def row(n):
    for i in range(n):
        print('#')
"""
main()
