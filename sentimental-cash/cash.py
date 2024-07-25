from cs50 import get_float

while True:
    change = get_float('change: ')
    if change > 0:
        break

quaters = 0
if change >= 25:
    quaters += 1
    change -= 25

dime = 0
if change >= 10:
    dime += 1
    change -= 10

nickel = 0
if change >= 5:
    nickel += 1
    change -= 5

penny = 0
if change >= 1:
    penny += 1
    change -= 1

total = quaters + dime + nickel + penny

print(f'{total}')


