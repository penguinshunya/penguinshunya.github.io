import glob
import json
import os
import re

result = {}

for file in glob.glob("./templates/*.cpp"):
    data = {}
    prefix = os.path.basename(file).split(".")[0]
    data["prefix"] = prefix
    data["body"] = []
    for s in open(file):
        s = re.sub("\n", "", s)
        data["body"].append(s)
    result[prefix] = data

with open("./cpp.json", "w") as f:
    f.write(json.dumps(result, indent=2))
