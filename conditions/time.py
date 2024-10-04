import datetime

currenttime = datetime.datetime.now()

print(currenttime.hour)

hour = 13

if hour < 12:
    print("Good Morning! Early bird gets the worm :) ")
elif hour < 15:
    print("Good Afternoon!")
else: 
    print("Good Good Evening! Don't go to sleep too late..")
