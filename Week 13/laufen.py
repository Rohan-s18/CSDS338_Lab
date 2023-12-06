"""
Author: Rohan Singh
Python Code to run some C code
"""

# Imports
import subprocess
import os
import re


# File reader and extracter for the pid file
def get_vruntime(pid):
    try:
        with open(f"/proc/{pid}/sched", "r") as file:
            lines = file.readlines()
            for line in lines:
                if line.startswith("se.vruntime"):
                    return float(line.split()[1])
    except FileNotFoundError:
        return None


# main function
def main():

    # compiler, i hardly know her
    subprocess.run("gcc -o gabel gabel.c".split())
    process = subprocess.Popen(["./gabel"], stdout=subprocess.PIPE)

    # obtaining the pids (pls work)
    output = process.stdout.read().decode('utf-8')
    pids = re.findall(r"PID: (\d+)", output)
    parent_pid, child_pid = map(int, pids)


    parent_vruntime = get_vruntime(parent_pid)
    child_vruntime = get_vruntime(child_pid)

    if parent_vruntime is not None and child_vruntime is not None:
        print(f"Parent vruntime: {parent_vruntime}")
        print(f"Child vruntime: {child_vruntime}")
    else:
        print("ruh roh")


if __name__ == "__main__":
    main()









