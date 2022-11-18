from gtts import gTTS
import os

term = input("inptoduce la terminacion\n")
os.system("./bot_poesia " + term + " > file_reader")

with open('file_reader', 'r') as file:
    data = file.read().replace('\n', '')
with open('file_reader', 'r') as file:
    pretty_data = file.read()

print("\n")
print(pretty_data)
print("\n")
audio = gTTS(text=data, lang='es', slow=False)

audio.save("audio.mp3")
os.system("mpg321 -q audio.mp3")
