# SM-2-rotateOnSpeech-webSerial
Rotate a servo motor by saying "right" or "left" in Arabic.

The task was from Smart Methods which was about making a motion through speech on a servo motor. The needed requirements were to make a serial port, an Arduino that is connected through the serial port and an HTML webpage to allow the user to translate the speech using a javascript file.

# How to use

### First, pick a desired port.
![image](https://user-images.githubusercontent.com/104837671/183251991-54132d95-3a6c-4244-8693-90a93f7d1d8c.png)

After that, press the start button and then you could say "Right" or "Left".
![image](https://user-images.githubusercontent.com/104837671/183251468-1e7925cc-3861-4ad2-bd6b-31cff2e3e9db.png)
The word you said will be displayed in the text area meaning that this word has been recongized.

The word will be translated into a letter either "R" or "L" into the javascript, then it will be sent to the port.

Then the Arduino will read it from the serial port, and move accordingly.



# Tools used
1. Arduino
2. AJAX Google API
3. Bootstrap
