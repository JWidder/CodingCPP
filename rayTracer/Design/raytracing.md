# Arbeitsergebnis



## Strahlverfolgung

Das Modell der Strahlen orientiert sich an der Lochkamera.

1. Für jeden Punkt des Bildes wird ein Strah erzeugt, der dessen Farbwert 
   bestimmt. 
1. Von einem Punktpunkt wird eine Strahl bei zu seine Quelle verfolgt.  
   1.   Dazu wird der Schnittpunkt des Strahl mit einem Objekt geucht.
   1.   Es wird der reflektierte Start erzeugt 
   1.   Dieser wird dann weiter verfolgt.
1. Verfolgt wird entweder bis zum   
   1. erreichen einer Lichtquelle, 
   2. nicht reflektierenden Objekt,
   3. im unendlichen (Rand der Scene) oder 
   4. eine definerite Zahl von Reflektionen   
  erreicht wurde. 
