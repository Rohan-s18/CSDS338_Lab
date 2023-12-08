# Imports
import numpy as np
import matplotlib.pyplot as plt

# Constants
B = 2  # Magnetic field strength in Tesla
A = (12 * 0.01) ** 2  # Area of the square loop in square meters
omega = 1  # Angular velocity in radians per second

# Time values
t = np.linspace(0, 7, 1000)  # Time from 0 to 7 seconds

# Calculating the magnetic flux and induced emf over time
flux = B * A * np.cos(omega * t)
emf = -B * A * omega * np.sin(omega * t)

# Plotting the emf over time
plt.figure(figsize=(8, 6))
plt.plot(t, emf, label='EMF through the loop')
plt.xlabel('Time (s)')
plt.ylabel('EMF (Volts)')
plt.title('Induced EMF through the loop over time')
plt.legend()
plt.grid(True)
plt.show()
