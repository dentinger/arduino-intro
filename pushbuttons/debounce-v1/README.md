# Debounce version 1.

Demo of how to read a push button to toggle an LED on and off with a simple solution
to the debounce issue of the button.  It uses a fixed delay to try to get rid of the bouncing.  It is not a perfect solution, but better than not handling debounce.  This delay is not as useful since it will pause the world so it makes this code less useful when the arduino has multiple things being done at one time.

![sample push button circuit](pushbutton-circuit.png)
