import subprocess
meta_data = subprocess.check_output(['netsh', 'wlan', 'show', 'profiles'])
data = meta_data.decode('utf-8', errors ="backslashreplace")
data = data.split('\n')
names = []
for i in data:
    if "All User Profile" in i:
        i = i.split(":")
        i = i[1]
        i = i[1:-1]
        names.append(i)
print("All wifi that system has connected to are ")
print("-----------------------------------------")
for name in names: print(name)
input("Press any key to exit")