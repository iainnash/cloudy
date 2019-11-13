cloud-leds/deps
https://platformio.org/lib/show/28/Adafruit%20NeoPixel/installation

cloud-stepper/deps
https://platformio.org/lib/show/265/AccelStepper

pio:
https://docs.platformio.org/en/latest/what-is-platformio.html

this code can work in the arduino ide, if the above libraries are installed and the code from src/main.ino for both programs is copied.

steps to use with pio:
1. install pio
`brew install platformio`
or `pip install -U platformio`
2. cd to project
3. build and upload: `pio run --target upload`
