
# 



# Led-Erloju⏰
 Led Erlojua objektu baten begiespen-pertzepzioa aldi batez eteten ez denean sortzen den ilusio optikoari dagokio.  Proiektu honetan LED lerro bat noiz piztu eta noiz itzali erabakitzen dugu, airean formak marrazteko. Helizeak behar bezain azkar egingo du bira, irudimenezko forma finkoa ikusteko. 

# Materiala🧰🛠️
 -12 Leds.                  
 -11 Resistentzia 100 Ω                 
 -2 Resistentzia 1k Ω                   
 -1 Sensor Hall                 
 -2 Arduino nano               
 -2 Bluetooth HC-05
 -1 Motor DC                       
 -3 Imanak                     
 -1 Elikatze Iturria                    
 -1 Rele                           
 -2 8mm-eko Errodamenduak                    
 -1 9V-ko Bateria               
 -1 Hagazka Hariztatuta M8,20cm
 -3 etengailu
 -1 hartgune enpotrablea emea
 -1 Pila euskarria

# Garapena 📑

![image](https://github.com/user-attachments/assets/01d16e11-6be5-4084-8dde-05b0a9261b81)
       Motorraren eskema ------------------------------------------------------------------  Erlojuaren eskema 
# Erlojuaren Eskema 🕞🪛
 Erlojuaren barruan 11 led bakaitza bere 100 Ω-ko erresistentziekin, Arduinoko pin digitaletan konektatuta egongo dira led-ak pizteko eta itxaltzeko. Arduinoa 9v-ko bateria elikatuko du eta haien artean etengailu bat egongo da beti piztuta ez egoteko. Bluetooth moduloa ere arduinoan konektatuta dago led-ak kontrolatzeko eta pizten diren probatzeko. Led hall-a led-en kontrako aldean egongo da hala ere arduinoan konektatuta egongo da bere funtzioa imana detektatzen duenean led-ak piztuko ditu.

# Motorraren Eskema🛠️
 
Eskemaren funtzioa da aplikazio baten bidez motorra aktibatzea edo desaktibatzea. Hori arduino, bluetooth eta app asmatzaile baten bidez lortzen dugu. Arduinoak ezin duenez motorra elikatu, 250AC/24DC/7DC elikatze-iturria egin dugu. Horrela, motorra 24 V-ean elikatuko dugu, eta arduinoa 7 V-ean. Orain, errele bat eranstea besterik ez zaizu falta, motorraren aktibazioa eta desaktibazioa kontrolatu ahal izateko.

# Euskarria🔩

Hemen hurrengo dokumentuak Kutxa nagusia, atzeko estalkia, euskarri motorra, bi hankak euskarrirako eta goiko euskarria. Dokumentoak STL 
formatutan egongo dira,  piezak aldatzeko Blender edo Tinkercad programak gomentzen dugu.

![image](https://github.com/user-attachments/assets/a0aa64e5-77ad-4ef5-9fcf-5ec280a64c78)![image](https://github.com/user-attachments/assets/8e8acfe5-04f8-49a8-863a-6fab25ad4aa4)





  
# App Bluetooth📱
MIT App Inventor aplikazioa erabili dugu gure aplikazioa sortzeko. Erabili dugu bluetooth bidez motorra eta led-ak pizteko eta itzaltzeko programa sortzeko, App inventor-a aukera asko ematen ditu eta programazioa erraza erabiltzen du aplikazioak sortzeko. Utziko dugu gure aplikazioa nahi duena erabiltzeko edo aldatzeko.

![image](https://github.com/user-attachments/assets/a668ef51-843d-4d61-a875-7620a16b1608)
![image](https://github.com/user-attachments/assets/952a41d1-debf-4dbe-a4d2-dc054240ee4f)






# Kodigoa💻
![image](https://github.com/user-attachments/assets/fd6d27b4-c6f1-44f0-8f06-a88a58774402)
![image](https://github.com/user-attachments/assets/684baf37-09ff-43c4-bc8d-2d4e35d96e0f)



Motorraren kodigoa bluetooth bidez motorra aktibatu eta desaktibatu egiten du.

Erlojuaren kodigoarentzako egina dagoen kodigoa hartu dugu eta LED-ak bluetooth bidez pizteko eta itxaltzeko hobekuntza jarri diogu. 


