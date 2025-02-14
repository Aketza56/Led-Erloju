
# 



# Led-Erloju⏰
 Led Erlojua objektu baten begiespen-pertzepzioa aldi batez eteten ez denean sortzen den ilusio optikoari dagokio.  Proiektu honetan [LED](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) lerro bat noiz piztu eta noiz itzali erabakitzen dugu, airean formak marrazteko. Helizeak behar bezain azkar egingo du bira, irudimenezko forma finkoa ikusteko. 


# Garapena 📑

![image](https://github.com/user-attachments/assets/01d16e11-6be5-4084-8dde-05b0a9261b81)
       Motorraren eskema ------------------------------------------------------------------  Erlojuaren eskema 
# Erlojuaren Eskema 🕞🪛
 Erlojuaren barruan 11 [led](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) bakaitza bere 100 Ω-ko [erresistentziekin](https://github.com/Aketza56/Led-Erloju/wiki/Materiala), Arduinoko pin digitaletan konektatuta egongo dira [led-ak](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) pizteko eta itzaltzeko. Arduinoa 9v-ko bateria elikatuko du eta haien artean [etengailu](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) bat egongo da beti piztuta ez egoteko. [Bluetooth moduloa](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) ere arduinoan konektatuta dago [led-ak](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) kontrolatzeko eta pizten diren probatzeko. [Hall-a](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) [led-en](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) kontrako aldean egongo da hala ere arduinoan konektatuta egongo da bere funtzioa [imana](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) detektatzen duenean [led-ak](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) piztuko ditu.

# Motorraren Eskema🛠️
 
Eskemaren funtzioa da aplikazio baten bidez motorra aktibatzea edo desaktibatzea. Hori arduino, bluetooth eta app asmatzaile baten bidez lortzen dugu. [Arduinoak](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) ezin duenez [motorra](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) elikatu, [250AC/24DC/7DC elikatze-iturria](https://github.com/Aketza56/Led-Erloju/tree/main/Dokumentazioa/Proteus/Elikatze%20iturria) egin dugu. Horrela, [motorra](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) 24 V-ean elikatuko dugu, eta [arduinoa](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) 7 V-ean. Orain, [errele](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) bat eranstea besterik ez zaizu falta, motorraren aktibazioa eta desaktibazioa kontrolatu ahal izateko.

# [Euskarria🔩](https://github.com/Aketza56/Led-Erloju/tree/main/Dokumentazioa/3D%20Piezak)

Hemen hurrengo dokumentuak Kutxa nagusia, atzeko estalkia, euskarri motorra, bi hankak euskarrirako eta goiko euskarria. Dokumentoak STL 
formatutan egongo dira,  piezak aldatzeko Blender edo Tinkercad programak gomentzen dugu.

![image](https://github.com/user-attachments/assets/a0aa64e5-77ad-4ef5-9fcf-5ec280a64c78)![image](https://github.com/user-attachments/assets/8e8acfe5-04f8-49a8-863a-6fab25ad4aa4)





  
# [App Bluetooth📱](https://github.com/Aketza56/Led-Erloju/tree/main/Dokumentazioa/Arduino/Bluetooth)
MIT App Inventor aplikazioa erabili dugu gure aplikazioa sortzeko. Erabili dugu bluetooth bidez [motorra](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) eta [led-ak](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) pizteko eta itzaltzeko programa sortzeko, App inventor-a aukera asko ematen ditu eta programazioa erraza erabiltzen du aplikazioak sortzeko. Utziko dugu gure aplikazioa nahi duena erabiltzeko edo aldatzeko.

![image](https://github.com/user-attachments/assets/a668ef51-843d-4d61-a875-7620a16b1608)
![image](https://github.com/user-attachments/assets/952a41d1-debf-4dbe-a4d2-dc054240ee4f)






# [Kodigoa💻](https://github.com/Aketza56/Led-Erloju/tree/main/Dokumentazioa/Arduino)
![image](https://github.com/user-attachments/assets/fd6d27b4-c6f1-44f0-8f06-a88a58774402)
![image](https://github.com/user-attachments/assets/684baf37-09ff-43c4-bc8d-2d4e35d96e0f)



Motorraren kodigoa bluetooth bidez [motorra](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) aktibatu eta desaktibatu egiten du. app invetorren bidez C edo D karakterea bidaltzen du bluetooth bidez arduinora, [Arduinoa](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) karaktera interpretatuko du C bada motorra piztuko du eta D sakatzerakoan [motorra](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) itzaliko du.💡

Erlojuaren kodigoan bluetooth aplikazioa berdina da A interpreatzen duenean [Led](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) guztiak piztuko ditu eta B [led-ak](https://github.com/Aketza56/Led-Erloju/wiki/Materiala) itzaliko ditu. Hasterakoan ondo kalibratuta badago kalkulatuko du zenbat irauten duen buelta bakoitza, hori kalkulatzerakoan /360 eta horrekin zenbat denboratan gradu bat irauten dun kalkulatzen du.Hori egiterakoan segundu, minutu eta orduko ardatzen posizia hartuko ditu eta erlojuare marrazkia agertuko da⏱️


