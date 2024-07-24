from cs50 import get_float

while True:
    change = get_float('change: ')
    if change > 0:
        break

quaters = change % 0.25

print(f'q: {quaters}')


