from cs50 import get_string

text = get_string('text: ')

letters = sum(1 for char in text if char.isalpha())

words = text.split()
num_words = len(words)

sentences = text.count('.') + text.count('!') + text.count('?')

L = (letters / num_words) * 100

S = (sentences / num_words) * 100

grade = 0.0588 * L - 0.296 * S - 15.8

grade = round(grade)

if grade < 1:
    print('Before Grade 1')
elif grade > 16:
    print('Grade 16+')
else:
    print(f'Grade {grade}')
