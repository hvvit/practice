val=int(input())

for value in range(val):
  print(" " * value,end='')
  print("*" * ((val - value)*2 - 1))

