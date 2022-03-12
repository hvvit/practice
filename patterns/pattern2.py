val=int(input())
for value in range(val):
  print(" " * (val - value -1 ),end='')
  print("*" * (value + 1))