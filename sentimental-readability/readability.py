from cs50 import get_string

text = get_string('text: ')

letters = sum(1 for char in text if char.isalpha())

words = text.split()
num_words = len(word)

print(f'{words}')
