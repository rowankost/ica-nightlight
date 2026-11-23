# NightLight

A small Arduino night light that your team builds together while practicing Git and GitHub in VS Code.

**Start here:** read [INSTRUCTIONS.md](INSTRUCTIONS.md) for what to do and when, and [TASKS.md](TASKS.md) for what each person builds.

**What it does**

- Press the button to switch between three modes: OFF, AUTO, ON.
- In AUTO mode the LED fades on when the room gets dark.
- The Serial Monitor prints a status line so you can see what is happening.

## Team

**Project Manager:** Rowan Kost (rowankost)

**Developer A (Sensor):** Kamran Shirbacheh (Kamran-ship-it)

**Developer B (LED):** Mac Jones (macjones98)

**Developer C (Button):** Your Name (your GitHub username)

## Wiring

| Part | Arduino pin | Notes |
|---|---|---|
| LED + 220 ohm resistor | D9 | Add the protection resistor in series to GND |
| Pushbutton | D2 and GND | uses the built-in pull-up resistor |
| Photoresistor + 10 k ohm resistor | A0 | 5V, photoresistor, A0, 10 k ohm resistor, GND |

## Project outline

```text
root/
├── .gitignore               # Git files and folders to ignore
├── .gitattributes           # Special instructions for Git
├── README.md                # Project overview (this file)
├── INSTRUCTIONS.md          # What to do and when
├── TASKS.md                 # What each person builds
└── NightLight/
	├── NightLight.ino       # Main sketch file: setup, loop, and the three modes
	├── config.h             # Pins and settings shared by every file
	├── light_sensor.ino     # Reads the photoresistor
	├── led.ino              # Controls the LED brightness
	├── button.ino           # Reads the pushbutton
	└── logger.ino           # Prints to the Serial Monitor
```

## Testing the code

Before committing any changes, you should compile your code to make sure it doesn't have any errors.

### Option 1: Compile in Arduino IDE

1. Open Arduino IDE.
2. Choose **File > Open** and open `NightLight/NightLight.ino` from this project.
3. Click Select Board -> Select other board and port, then select "Arduino Uno."
4. Click **Verify** (the checkmark) to compile the sketch.
5. Confirm the output reports **Done compiling**. If errors appear, fix them and verify again before committing.

### Option 2: Compile in VS Code with the Arduino Maker Workshop extension

1. From the File Explorer, right click on NightLight (the sketch directory) and select "Add as Active Workspace Folder."
2. Click on the Arduino icon in the left toolbar and click on Maker Workshop Home.
3. Under Sketch Configuration, click "Select your board" and choose "Arduino Uno."
4. Open the Command Palette (Ctrl + Shift + P) and run "Arduino: Compile."
