n=int(input())
year=n//365
n=n-(year*365)
week=n//7
day=n-(week*7)
print(year)
print(week)
print(day)
