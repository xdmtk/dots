import subprocess


import os

cwd = os.getcwd()
line = ""

subprocess.call(["curl", "-A", "Mozilla/5.0 (MSIE; Windows 10)", "https://www.google.com/search?q=north+hills+weather&oq=north+hills+weather&aqs=chrome..69i57j69i60l5.3010j0j4&sourceid=chrome&ie=UTF-8", "-o", "res.html"], stdout=subprocess.DEVNULL, 
stderr=subprocess.DEVNULL)
with open(cwd + "/res.html") as doc:
    for l in doc:
        line += l
subprocess.call(["rm", cwd + "/res.html"])
t_start = line.find("°F")
print(line[t_start-2:t_start+2])


