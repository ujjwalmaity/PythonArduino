# import the serial and time library
import serial
import time

# initialize a serial object using our serial library
# Note: It is very important to mention the correct COM port name.
#      It can found by using the Device manager on your computer.
arduinoData = serial.Serial('com3', 9600)

# hold the program for two seconds
time.sleep(2)

# read anything coming from Arduino
data = arduinoData.readline()
print(data.decode('utf-8'))
# read another line coming from Arduino
print(arduinoData.readline().decode('utf-8'))


while 1:
    # get input from user
    data = input('-->')

    if (data == '1'):
        # write the value of the parameter to Arduino
        arduinoData.write(data.encode('utf-8'))
        print(arduinoData.readline().decode('utf-8'))

    if (data == '0'):
        arduinoData.write(data.encode('utf-8'))
        print(arduinoData.readline().decode('utf-8'))
