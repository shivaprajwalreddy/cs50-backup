from cs50 import get_float

while True:
    change = get_float('change: ')
    if change > 0:
        break
change = change * 100

quaters = 0
while True:
    if change >= 25:
        quaters += 1
        change -= 25
    else:
        break

dime = 0
while True:
    if change >= 10:
        dime += 1
        change -= 10
    else:
        break

nickel = 0
while True:
    if change >= 5:
        nickel += 1
        change -= 5
    else:
        break

penny = 0
while True:
    if change >= 1:
        penny += 1
        change -= 1
    else:
        break

total = quaters + dime + nickel + penny

print(f'{total}')
