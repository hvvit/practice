val=int(input())

for value in range(val):
  print(" " * (val - value -1 ),end='')
  print("*" * (2 * value + 1))

for value in range(val):
  print(" " * (value + 1),end='')
  print("*" * ((val - value - 1)*2 - 1))