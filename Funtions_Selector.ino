

void selectStatesPin(int fHigh, int cHigh, int fLow, int fLow2, int fLow3, int cLow, int cLow2, int cLow3, int capHigh, int capLow1, int capLow2, int capLow3) //sin los transistores = (int fHigh,int cHIGH, int fLow, int fLow2, int cInput, int cInput2)
{
  digitalWrite(fLow, LOW);      digitalWrite(fLow2, LOW);      digitalWrite(fLow3, LOW);
  digitalWrite(cLow, LOW);      digitalWrite(cLow2, LOW);      digitalWrite(cLow3, LOW);
  digitalWrite(capLow1, LOW);   digitalWrite(capLow2, LOW);    digitalWrite(capLow3, LOW);

  digitalWrite(fHigh, HIGH);    digitalWrite(cHigh, HIGH);     digitalWrite(capHigh, HIGH);

}


void turnOnLed(int led_num)
{
  switch (led_num)
  {
    case 1:
      selectStatesPin(fila1, columna1, fila2, fila3, fila4, columna2, columna3, columna4, piso1, piso2, piso3, piso4);            break;
    case 2:
      selectStatesPin(fila1, columna2, fila2, fila3, fila4, columna1, columna3, columna4, piso1, piso2, piso3, piso4);            break;
    case 3:
      selectStatesPin(fila1, columna3, fila2, fila3, fila4, columna1, columna2, columna4, piso1, piso2, piso3, piso4);            break;
    case 4:
      selectStatesPin(fila1, columna4, fila2, fila3, fila4, columna1, columna2, columna3, piso1, piso2, piso3, piso4);            break;
    case 5:
      selectStatesPin(fila2, columna1, fila1, fila3, fila4, columna2, columna3, columna4, piso1, piso2, piso3, piso4);            break;
    case 6:
      selectStatesPin(fila2, columna2, fila1, fila3, fila4, columna1, columna3, columna4, piso1, piso2, piso3, piso4);            break;
    case 7:
      selectStatesPin(fila2, columna3, fila1, fila3, fila4, columna1, columna2, columna4, piso1, piso2, piso3, piso4);            break;
    case 8:
      selectStatesPin(fila2, columna4, fila1, fila3, fila4, columna1, columna2, columna3, piso1, piso2, piso3, piso4);            break;
    case 9:
      selectStatesPin(fila3, columna1, fila1, fila2, fila4, columna2, columna3, columna4, piso1, piso2, piso3, piso4);            break;
    case 10:
      selectStatesPin(fila3, columna2, fila1, fila2, fila4, columna1, columna3, columna4, piso1, piso2, piso3, piso4);            break;
    case 11:
      selectStatesPin(fila3, columna3, fila1, fila2, fila4, columna1, columna2, columna4, piso1, piso2, piso3, piso4);            break;
    case 12:
      selectStatesPin(fila3, columna4, fila1, fila2, fila4, columna1, columna2, columna3, piso1, piso2, piso3, piso4);            break;
    case 13:
      selectStatesPin(fila4, columna1, fila1, fila2, fila3, columna2, columna3, columna4, piso1, piso2, piso3, piso4);            break;
    case 14:
      selectStatesPin(fila4, columna2, fila1, fila2, fila3, columna1, columna3, columna4, piso1, piso2, piso3, piso4);            break;
    case 15:
      selectStatesPin(fila4, columna3, fila1, fila2, fila3, columna1, columna2, columna4, piso1, piso2, piso3, piso4);            break;
    case 16:
      selectStatesPin(fila4, columna4, fila1, fila2, fila3, columna1, columna2, columna3, piso1, piso2, piso3, piso4);            break;
    // piso 1
    case 17:
      selectStatesPin(fila1, columna1, fila2, fila3, fila4, columna2, columna3, columna4, piso2, piso1, piso3, piso4);            break;
    case 18:
      selectStatesPin(fila1, columna2, fila2, fila3, fila4, columna1, columna3, columna4, piso2, piso1, piso3, piso4);            break;
    case 19:
      selectStatesPin(fila1, columna3, fila2, fila3, fila4, columna1, columna2, columna4, piso2, piso1, piso3, piso4);            break;
    case 20:
      selectStatesPin(fila1, columna4, fila2, fila3, fila4, columna1, columna2, columna3, piso2, piso1, piso3, piso4);            break;
    case 21:
      selectStatesPin(fila2, columna1, fila1, fila3, fila4, columna2, columna3, columna4, piso2, piso1, piso3, piso4);            break;
    case 22:
      selectStatesPin(fila2, columna2, fila1, fila3, fila4, columna1, columna3, columna4, piso2, piso1, piso3, piso4);            break;
    case 23:
      selectStatesPin(fila2, columna3, fila1, fila3, fila4, columna1, columna2, columna4, piso2, piso1, piso3, piso4);            break;
    case 24:
      selectStatesPin(fila2, columna4, fila1, fila3, fila4, columna1, columna2, columna3, piso2, piso1, piso3, piso4);            break;
    case 25:
      selectStatesPin(fila3, columna1, fila1, fila2, fila4, columna2, columna3, columna4, piso2, piso1, piso3, piso4);            break;
    case 26:
      selectStatesPin(fila3, columna2, fila1, fila2, fila4, columna1, columna3, columna4, piso2, piso1, piso3, piso4);            break;
    case 27:
      selectStatesPin(fila3, columna3, fila1, fila2, fila4, columna1, columna2, columna4, piso2, piso1, piso3, piso4);            break;
    case 28:
      selectStatesPin(fila3, columna4, fila1, fila2, fila4, columna1, columna2, columna3, piso2, piso1, piso3, piso4);            break;
    case 29:
      selectStatesPin(fila4, columna1, fila1, fila2, fila3, columna2, columna3, columna4, piso2, piso1, piso3, piso4);            break;
    case 30:
      selectStatesPin(fila4, columna2, fila1, fila2, fila3, columna1, columna3, columna4, piso2, piso1, piso3, piso4);            break;
    case 31:
      selectStatesPin(fila4, columna3, fila1, fila2, fila3, columna1, columna2, columna4, piso2, piso1, piso3, piso4);            break;
    case 32:
      selectStatesPin(fila4, columna4, fila1, fila2, fila3, columna1, columna2, columna3, piso2, piso1, piso3, piso4);            break;
    //piso 2
    case 33:
      selectStatesPin(fila1, columna1, fila2, fila3, fila4, columna2, columna3, columna4, piso3, piso2, piso1, piso4);            break;
    case 34:
      selectStatesPin(fila1, columna2, fila2, fila3, fila4, columna1, columna3, columna4, piso3, piso2, piso1, piso4);            break;
    case 35:
      selectStatesPin(fila1, columna3, fila2, fila3, fila4, columna1, columna2, columna4, piso3, piso2, piso1, piso4);            break;
    case 36:
      selectStatesPin(fila1, columna4, fila2, fila3, fila4, columna1, columna2, columna3, piso3, piso2, piso1, piso4);            break;
    case 37:
      selectStatesPin(fila2, columna1, fila1, fila3, fila4, columna2, columna3, columna4, piso3, piso2, piso1, piso4);            break;
    case 38:
      selectStatesPin(fila2, columna2, fila1, fila3, fila4, columna1, columna3, columna4, piso3, piso2, piso1, piso4);            break;
    case 39:
      selectStatesPin(fila2, columna3, fila1, fila3, fila4, columna1, columna2, columna4, piso3, piso2, piso1, piso4);            break;
    case 40:
      selectStatesPin(fila2, columna4, fila1, fila3, fila4, columna1, columna2, columna3, piso3, piso2, piso1, piso4);            break;
    case 41:
      selectStatesPin(fila3, columna1, fila1, fila2, fila4, columna2, columna3, columna4, piso3, piso2, piso1, piso4);            break;
    case 42:
      selectStatesPin(fila3, columna2, fila1, fila2, fila4, columna1, columna3, columna4, piso3, piso2, piso1, piso4);            break;
    case 43:
      selectStatesPin(fila3, columna3, fila1, fila2, fila4, columna1, columna2, columna4, piso3, piso2, piso1, piso4);            break;
    case 44:
      selectStatesPin(fila3, columna4, fila1, fila2, fila4, columna1, columna2, columna3, piso3, piso2, piso1, piso4);            break;
    case 45:
      selectStatesPin(fila4, columna1, fila1, fila2, fila3, columna2, columna3, columna4, piso3, piso2, piso1, piso4);            break;
    case 46:
      selectStatesPin(fila4, columna2, fila1, fila2, fila3, columna1, columna3, columna4, piso3, piso2, piso1, piso4);            break;
    case 47:
      selectStatesPin(fila4, columna3, fila1, fila2, fila3, columna1, columna2, columna4, piso3, piso2, piso1, piso4);            break;
    case 48:
      selectStatesPin(fila4, columna4, fila1, fila2, fila3, columna1, columna2, columna3, piso3, piso2, piso1, piso4);            break;
    //piso 3
    case 49:
      selectStatesPin(fila1, columna1, fila2, fila3, fila4, columna2, columna3, columna4, piso4, piso2, piso3, piso1);            break;
    case 50:
      selectStatesPin(fila1, columna2, fila2, fila3, fila4, columna1, columna3, columna4, piso4, piso2, piso3, piso1);            break;
    case 51:
      selectStatesPin(fila1, columna3, fila2, fila3, fila4, columna1, columna2, columna4, piso4, piso2, piso3, piso1);            break;
    case 52:
      selectStatesPin(fila1, columna4, fila2, fila3, fila4, columna1, columna2, columna3, piso4, piso2, piso3, piso1);            break;
    case 53:
      selectStatesPin(fila2, columna1, fila1, fila3, fila4, columna2, columna3, columna4, piso4, piso2, piso3, piso1);            break;
    case 54:
      selectStatesPin(fila2, columna2, fila1, fila3, fila4, columna1, columna3, columna4, piso4, piso2, piso3, piso1);            break;
    case 55:
      selectStatesPin(fila2, columna3, fila1, fila3, fila4, columna1, columna2, columna4, piso4, piso2, piso3, piso1);            break;
    case 56:
      selectStatesPin(fila2, columna4, fila1, fila3, fila4, columna1, columna2, columna3, piso4, piso2, piso3, piso1);            break;
    case 57:
      selectStatesPin(fila3, columna1, fila1, fila2, fila4, columna2, columna3, columna4, piso4, piso2, piso3, piso1);            break;
    case 58:
      selectStatesPin(fila3, columna2, fila1, fila2, fila4, columna1, columna3, columna4, piso4, piso2, piso3, piso1);            break;
    case 59:
      selectStatesPin(fila3, columna3, fila1, fila2, fila4, columna1, columna2, columna4, piso4, piso2, piso3, piso1);            break;
    case 60:
      selectStatesPin(fila3, columna4, fila1, fila2, fila4, columna1, columna2, columna3, piso4, piso2, piso3, piso1);            break;
    case 61:
      selectStatesPin(fila4, columna1, fila1, fila2, fila3, columna2, columna3, columna4, piso4, piso2, piso3, piso1);            break;
    case 62:
      selectStatesPin(fila4, columna2, fila1, fila2, fila3, columna1, columna3, columna4, piso4, piso2, piso3, piso1);            break;
    case 63:
      selectStatesPin(fila4, columna3, fila1, fila2, fila3, columna1, columna2, columna4, piso4, piso2, piso3, piso1);            break;
    case 64:
      selectStatesPin(fila4, columna4, fila1, fila2, fila3, columna1, columna2, columna3, piso4, piso2, piso3, piso1);            break;

  }
}
