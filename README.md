# Traffic-Light-Arduino-Tinkercad
Construeix un semàfor amb Arduino
Imagina que tens un problema amb un pont d'un sol carril que creua un riu. Cada setmana, un o dos accidentes ocorren a la noche, quan els conductores cansats circulen a través del pont sense detenir-se primer per veure si el camí està buidat. Has sugerido instalar semàfors però l'alcalde vol veure demostrat el projecte abans de signar la compra. Podries llogar llums temporals, però són cares. En canvi, ha decidido construir un modelo del pont amb el tràfic utilitzant LEDs i un Arduino para controlar unes llums que simulin un semàfor.


El nostre objectiu és instal·lar semàfors de tres colors en cada extrem del carril únic del pont. Les llums permeten que el tràfic flueixi només en una direcció a la vegada. Quan los sensores sitúan en qualsevol extrem del pont detectan un cotxe farà que esperi mitjançant una llum vermella. Les llums canviaran i permetran que el tràfic flueixi en l'adreça oposada.
L'Algorisme
Usar dos botones para simular los sensores del vehículo en cada extremo del puente. Cada joc de llums tindrà LEDs vermells, grocs i verds. Inicialment, el sistema permetrà que el tràfic flueixi d'oest a est, per la qual cosa les llums orientades a l'oest es posaran a verd i les llums de la de l'est es posaran en vermell. Quan un vehicle s'acosta al pont i que acabará prement el botó la llum és vermella, llavors el sistema encendrà la llum en el costat oposat de verd a groc i a vermell, i després haurà d'un període de temps establert per permetre que qualsevol vehículo que es trobi ja en el pont pugui acabar l'encreuament. A continuación, la llum groga cesa en ell costat del vehículo en espera parpellejarà com un avís de “preparar-se” per al conductor i finalment la llum canviarà a verd. La llum romandrà verda fins que el cotxe s'acosti a l'altre costat, moment en el qual es repeteix el procés.
lista de componentes


Això és el que necessitaràs per crear aquest projecte:
Dos LEDs vermells (LED1 i LED2)
Dos LEDs Grocs (LED3 i LED4)
Dos LEDs verdes (LED5 i LED6)
Sis resistencias de 560 Ω (de R1 a R6)
Resistencias debidas de 10 kΩ (R7 i R8)
Dos condensadores de 100 nF (C1 y C2)
Dos pulsadores (S1 y S2)
Una placa de medición de grandària mitjana
Un Arduino i un cable USB Diversos cables de conexión
