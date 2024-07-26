from cs50 import get_string

text = get_string('text: ')

letters = sum(1 for char in text if char.isalpha())

word = text.split()
words = len(word)

print(f'{words}')
