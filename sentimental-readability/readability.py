from cs50 import get_string

text = get_string('text: ')

letters = sum(1 for char in text if char.isalpha())

words = text.split()
num_words = len(words)

sentences = text.count('.') + text.count('!') + text.count('?')

l = avg( letters / 100 words)

print(f'{sentences}')
