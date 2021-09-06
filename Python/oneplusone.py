i = 1
guess = 21
while True:
    print(i, " + ", i)
    guess = int(input(),10)
    if guess != i + i:
        break
    i = guess
print("Ops, ",i, " + ", i, " = ", i+i, ", not ", guess)
    
