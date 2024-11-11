Hi!

This is the overview of how I made [my fish](https://youtube.com/shorts/yeWvG-k4uzE) in July 2022. I plan to make this again, but better, with my singing rocky lobster I got on Facebook Marketplace this year (July 2024).

## The parts 

- Any smart speaker (I used the Echo Dot since it is what I had laying around)
    - https://www.amazon.com/b/?node=9818047011&ref_=mars_byline_aucc
- A moving fish ([this is mine](https://www.amazon.sa/-/en/Frankie-wall-mountable-singing-McDonalds-commercial/dp/B084P6SDX5))
- Arduino Nano
- Relay
- a lot of patience

  ![image](https://github.com/user-attachments/assets/3374dcde-c0bf-422d-a882-aa5038f4643c)


# Some (likely non-optimal) steps

## Prying apart the Alexa

They did not seem to want you to take these apart. I unscrewed it and then pryed it apart.

![image](https://github.com/user-attachments/assets/e990705c-85cb-4a1a-84e7-cb32af5a1d12)

Inside there is a metal container where all the electronics are with a ring light on the bottom. I took that apart to get all of the pieces out. I disconnected the lights from the base and the buttons. I didn't need the speaker inside since I wanted the muffled crappy audio of the original fish speaker. It also did not fit, but I did not really care anyways.

## Open heart surgery on the fish

Frankie came apart super easily. I had already taken him apart once when one of his gears inside broke (from me as a 7 year old putting my hands in his mouth) and I replaced it so he could speak again.

![image](https://github.com/user-attachments/assets/bace2ddd-c06f-4801-b986-48e483f1952f)

The fish is basically a motor on a stick (for the mouth) with another motor that moves the stick (so he can sit up) and a button to make him run. The mouth automatically closes.

There was also a lot of foam inside, but it was easy to remove. 

The speaker, board, and battery electronics were all attached to the wooden stand behind the fish. This gave me plenty of room to shove the Alexa's guts into the fish.

I cut the wires to the fish speaker to test on the Alexa. Now he [could dance but not sing](https://youtube.com/shorts/jNK0gJrMf8A) and I felt bad. The Alexa sounded beautiful with the [cheap muffled fish speaker](https://youtube.com/shorts/vt8rjTD93xk).

## Combining fish movement with Alexa sound

I was not sure how to convert sound into a digital signal to process, so I used the lights. When the LEDs come on, the Arduino read this as a digital input and in turn sent out a pulsing signal to the relay. The relay turned on and off to let current flow from the power supply to the motor. I had to fine tune the amount of time on/off to make sure I didn't hurt the motors or grind the gears but also make it look like the fish was talking.

[Here is the first time he spoke](https://youtube.com/shorts/Gbs84-SNAgI). I was kind of shocked it worked. I really love the mechanical clicking when he talks.

## Combining the fish sound into the Alexa

Afterwards, I just had Frankies sound left over and an Alexa shell. I knew what I had to do.

![image](https://github.com/user-attachments/assets/340a9b8e-df0c-4a6f-b2ac-097ce266f7b9)

I attached the frankie output to the Alexa speaker input and crammed in the empty shell. The buttons on top were now inside the fish, so I had to create a button on the [back to trigger it](https://youtube.com/shorts/_qLdN-4xV0Y).

# Results

https://youtube.com/shorts/dxNOjlOwJYw 

The Alexa Frankie is a little hard of hearing, so I have to speak loudly to it. He also gets warm while sitting around, but this shouldn't be a problem. Unfortunately, Purdue's wifi blocks Alexas so I cannot bring him to school.

When I do the project again, I think I will
- use a PCB instead so it is more reliable and compact
- not use a relay since they are so large
- get the signal from the speaker instead of the lights so the fish stops talking after the Alexa stops talking. (Right now, the lights remain on after the Alexa is done talking, so Frankie continues talking)
- Make a hole in the front for the microphone
- Make the fish (or lobster) stand up when it speaks. (Probably connect the lighting output to the body and the speaker output to the mouth)

  ![image](https://github.com/user-attachments/assets/243d8019-9b8b-4465-8209-5cd7253effd2)
