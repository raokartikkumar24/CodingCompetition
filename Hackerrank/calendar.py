# Enter your code here. Read input from STDIN. Print output to STDOUT
import calendar

inDate = input().split()
mm = int(inDate[0])
dd = int(inDate[1])
yy = int(inDate[2])

val = calendar.weekday(yy,mm,dd)
print(calendar.day_name[val].upper())
