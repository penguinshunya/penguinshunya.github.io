import glob
import json
import os
import re

def make(prefix, filename):
    data = {}
    data["prefix"] = prefix
    data["body"] = []
    for s in open(filename):
        s = re.sub("\n", "", s)
        data["body"].append(s)
    return data

result = {}

with open("./template.cpp") as f:
    prefix = "cpt"
    result[prefix] = make(prefix, "./template.cpp")

for file in glob.glob("./templates/*.cpp"):
    prefix = os.path.basename(file).split(".")[0]
    result[prefix] = make(prefix, file)

with open("./cpp.json", "w") as f:
    f.write(json.dumps(result, indent=2))
