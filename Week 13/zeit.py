"""
Author: Rohan Singh
Benchmarking code for VM/BMM performance comparison
"""

import time
import matplotlib.pyplot as plt
import numpy as np
import psutil
import requests


class Benchmarking():
    
    def __init__(self, device) -> None:
        self.device_name = device
        pass


    # CPU Process, so arithmetic division
    def cpu_bound_process(self):
        start_time = time.time()
    
        result = 0
        for i in range(10**5):
            result += 1

        end_time = time.time()
        return end_time - start_time
    

    # Using sine/cosine from computer
    def memory_process(self):
        start_time = time.time()
        array = np.random.rand(10**7)
        for i in range(10):
            array = np.sin(array)
        end_time = time.time()
        return end_time - start_time
    
    
    # Fetching website stuff
    def io_process(self):
        start_time = time.time()
        response = requests.get("https://www.jocularglint54.com")
        end_time = time.time()
        return end_time - start_time


    # Testing function
    def test(self)->None:
        print(f"The Device that we are using is: {self.device_name}")
        print(f"The Benchmarking results from this device are:")

        cpu_time = self.cpu_bound_process()
        mem_time = self.memory_process()
        io_time = self.io_process()

        print(f"CPU-bound process execution time: {cpu_time} seconds")
        print(f"Memory-intensive process execution time: {mem_time} seconds")
        print(f"I/O-bound process execution time: {io_time} seconds")


# Main function
def main():
    
    tester = Benchmarking(device="Mac-OS")
    tester.test()

    cpu_speed = psutil.cpu_freq().current
    print(f"CPU Speed: {cpu_speed} MHz")


if __name__ == "__main__":
    main()



