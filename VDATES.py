t = int(input(""))

while t > 0:
    a = list(map(int, input("").split()))
    current_day, first_dose_day, second_dose_day = a[0], a[1], a[2]

    if current_day >= first_dose_day and current_day <= second_dose_day:
        print("Take second dose now")
    elif current_day > second_dose_day:
        print("Too Late")
    elif current_day < first_dose_day:
        print("Too Early")

    t = t - 1
