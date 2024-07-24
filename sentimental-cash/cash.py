from cs50 import get_float

while True:
    change = get_float('change: ')
    if change > 0:
        break

quaters = int((change * 100) % 25)

print(f'q: {quaters}')


