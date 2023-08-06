t = int(input(""))

while t > 0:
    n = int(input(""))
    a = list(map(int, input("").split()))

    max_val = max(a)

    while max_val in a:
        a.remove(max_val)  # Remove all occurrences of the first maximum value from the list

    max_val2 = max(a)  # Find the new maximum value in the modified list
    print(max_val + max_val2)  # Print the sum of the two maximum values

    t = t - 1
