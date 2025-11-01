import serial.tools.list_ports

ports = serial.tools.list_ports.comports()
serialInst = serial.Serial()
portsList = []

for one in ports:
    portsList.append(str(one))
    print(str(one))

com = input("Select the ESP32's COM Port: ")

serialInst.baudrate = 115200
serialInst.port = com
serialInst.open()

while True:
    print("\nCommands:")
    print("1. Point at a new location")
    print("2. Exit")
    command = input("Enter A Command: ")

    serialInst.write(command.encode('utf-8'))

    if command == 2:
        quit()