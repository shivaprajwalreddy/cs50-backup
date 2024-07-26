from cs50 import get_string

text = get_string('text: ')

letters = len(isalpha(text))

print(f'{letters}')
