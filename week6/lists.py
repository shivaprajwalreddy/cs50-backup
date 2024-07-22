scores = []
for i in range(3):
    score = int(input('score: '))
    scores = scores.append(score)

avg = sum(scores) / len(scores)
print(f'average: {avg}')
