from gtts import gTTS
import os

os.system("make")
term = input("inptoduce la terminacion\n")
os.system("./bot_poesia " + term + " > file_reader")

with open('file_reader', 'r') as file:
    pretty_data = file.read()

print(pretty_data)
audio = gTTS(text=pretty_data, lang='es', slow=False)

audio.save("audio.mp3")
os.system("mpg321 -q audio.mp3 &")
os.system("make fclean")
