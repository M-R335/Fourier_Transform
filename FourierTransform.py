import numpy as np

#small input 
input_array = np.array([0.0, 1.0, 2.0, 3.0])

#FFT
transformed = np.fft.fft(input_array)

print("FFT Output:", transformed)

#a loop for minor inputs as an example:
for i, complex_value in enumerate(transformed):
    print(f"Value at index {i}: {complex_value.real:.2f} + {complex_value.imag:.2f}j")
