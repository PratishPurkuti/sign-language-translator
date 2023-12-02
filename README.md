# signl-language-translator
this repository contains all the files for the project sign language translator
Project: sign language translator using Vocal tone replicating sign language (VTRSL 1.0)

This is an in depth guide on how to make a sign language translator. Here we’ve used Our own module where each sign represents a vocal tone instead of words or tone but you can make it to represent anything you want just by changing the voice clips.

For speaker:
Using ~9 PWM pin to connect The speaker. You can also use TX and RX to connect a speaker with -ve and +ve point wires.
Parts You’ll need:
Arduino Uno (Arduino in 100 Seconds)
Flex sensor*5 (All About Flex Sensor in 8 Min | Basics | Working | Arduino | Interfacing | TinkerCAD Simulations)
BreadBoard (Everything You Need to Know about Breadboards)
Jumper wires
Sd card
SD card reader (Audio/Music Player with Amplifier using Arduino)
Speakers
Gloves

These parts are not really compulsory. Every part enlisted can be replaced with another similar part. Flex sensor is exceptional but if you want a cheap replacement of flex sensor. I’d recommend you to watch the following video:Make a Flex Sensor for Robotic Hand and Arduino | DIY

Working methodology:
So whenever a flex sensor is bent a signal is given to the arduino board. For this project we’ve used 5 flex sensors with the help of all the flex sensors we can have 31 possible combinations. The arduino recognizes the sequence and plays the assigned audio to that following sequence through the audio module. All the audio is present in the SD card reader.
It is recommended to just put audio in the sd card without any files and name the audio files as in numbers
