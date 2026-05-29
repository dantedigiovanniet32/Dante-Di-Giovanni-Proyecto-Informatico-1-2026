Dante Di Giovanni
Proyecto Informatico 1
2026
4°2°
TP 4
Uso de sensores + Monitor Serial

-Leer datos que nos brinda un sensor de temperatura(TPM35) y uno de luz ambiental(LDR).
-Mostrar esos 2 datos por el monitor serial con el siguiente formato:
"El nivel de luz actual es:"  VALOR " y la temperatura actual:" VALOR  "ºc"   c/u en una linea distinta                                
( utilizar condicional compuesto)
-Hacer prender un led RGB según la temperatura que mida el sensor:
                -rojo: si es más de 90°c
                -azul: si es menos de 18°c
                -verde: si está entre 18ºc y 90ºc

(utilizar condicional compuesto y MAP invertido)
 -Solo se deberá prender el led como se indica arriba, siempre y cuando la luz ambiental este entre el 30% y 70%. 
siendo 0%  TODA LA LUZ ENCENDIDA
siendo 100% TODA LA LUZ APAGADA



Cuando queria poner el simbolo de grados "°" puse el codigo de que hacia referencia en la tabla de ascci que era el 167 no funcionaba y tampoco el 248, ponian otros simbolos. Asi que use el mapa de caracteres de windows que me daba el codigo 176. El led rgb parpadea por el delay, se podria hacer una variable nueva para guardar si la temperatura/led cambia y cuando lo haga si hacer que prenda  y apague el led de vuelta por si nesesit cambiar de color. Es una mpsible mejora al codigo.
