import keyboard, serial 

password = "wombat1977"

def lock():
    # this is not working, i thinking the ctrl win is happening to fast? 
    keyboard.press("ctrl")
    keyboard.press("win")
    keyboard.press("q")
    keyboard.release("ctrl")
    keyboard.release("win")
    keyboard.release("q")



def login():
    keyboard.write(password)
    keyboard.send("enter")

def terminal():
    keyboard.press_and_release("win+space")
    keyboard.write("terminal")
    keyboard.send("enter")

se = serial.Serial("/dev/tty.usbmodem1421")

macros = {
        b"0" : lock,
        b"1" : lambda : keyboard.write("One"), 
        b"2" : lambda : keyboard.write("Two"), 
        b"3" : lambda : keyboard.write("Three"),
        b"4" : lambda : keyboard.write("Four"),
        b"5" : lambda : keyboard.write("Five"),
        b"6" : lambda : keyboard.write("Six"), 
        b"7" : lambda : keyboard.write("Seven"),
        b"8" : lambda : keyboard.write("Eight"),
        b"9" : lambda : keyboard.write("Nine"),
        b'C' : login,
        }

while True:
    k = se.read()
    if macros.get(k, False):
        macros[k]()


