from gtts import gTTS
import os

my_text = 'De las pusgracias de los deeblos, cuando a la soledad de restos etiros, como del estremecedor bolencio de los sindadosos, cuyos frutos son los suenos que acariciamos y amamos. el dejara el letrero yo vejare dersos, cae sobre un venillo de aranos, contra la ilevacion de los empuestos, de las voces mortales a los iros de congenuos. Desdichas y caminos acen hamigos, de ontenas de cetonos, aun vestido de gris y anidos somargos, creemos avanzar moando nos cuvemos. Bajo los parpados cantre los ebellos, anudad a los vicaros con los pivos, conviene ceder el paso a los tontos y a los toros, a traves de las tierras con arpados pacuaticos.'

audio = gTTS(text=my_text, lang='es', slow=False)

audio.save("audio.mp3")
os.system("mpg321 audio.mp3")
