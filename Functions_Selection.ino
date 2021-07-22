
void SelectStatesPin(int rowHigh, int columnumnHigh, int rowLow, int rowLow2, int rowLow3, int columnumnsLow, int columnumnsLow2, int columnumnsLow3, int floorHigh, int floorLow1, int floorLow2, int floorLow3) //sin los transistores = (int rowHigh,int columnumnHigh, int rowLow, int rowLow2, int cInput, int cInput2)
{
  digitalWrite(rowLow, LOW);      digitalWrite(rowLow2, LOW);      digitalWrite(rowLow3, LOW);        //rows apagadas    (Rows Off)
  digitalWrite(columnumnsLow, LOW);  digitalWrite(columnumnsLow2, LOW);  digitalWrite(columnumnsLow3, LOW);    //columns apagadas (columnumns Off)
  digitalWrite(floorLow1, LOW);   digitalWrite(floorLow2, LOW);    digitalWrite(floorLow3, LOW);      //floors apagados    (floors off)

  digitalWrite(rowHigh, HIGH);    digitalWrite(columnumnHigh, HIGH);     digitalWrite(floorHigh, HIGH);    //row,column,floor ecendidos

}


void TurnOnLed(int led_num)       //Funcion para enceder led, recibe un parametro que es el numero del led que queremos encender.
{
  switch (led_num)
  {
    case 1:
      SelectStatesPin(row1, column1, row2, row3, row4, column2, column3, column4, floor1, floor2, floor3, floor4);            break;
    case 2:
      SelectStatesPin(row1, column2, row2, row3, row4, column1, column3, column4, floor1, floor2, floor3, floor4);            break;
    case 3:
      SelectStatesPin(row1, column3, row2, row3, row4, column1, column2, column4, floor1, floor2, floor3, floor4);            break;
    case 4:
      SelectStatesPin(row1, column4, row2, row3, row4, column1, column2, column3, floor1, floor2, floor3, floor4);            break;
    case 5:
      SelectStatesPin(row2, column1, row1, row3, row4, column2, column3, column4, floor1, floor2, floor3, floor4);            break;
    case 6:
      SelectStatesPin(row2, column2, row1, row3, row4, column1, column3, column4, floor1, floor2, floor3, floor4);            break;
    case 7:
      SelectStatesPin(row2, column3, row1, row3, row4, column1, column2, column4, floor1, floor2, floor3, floor4);            break;
    case 8:
      SelectStatesPin(row2, column4, row1, row3, row4, column1, column2, column3, floor1, floor2, floor3, floor4);            break;
    case 9:
      SelectStatesPin(row3, column1, row1, row2, row4, column2, column3, column4, floor1, floor2, floor3, floor4);            break;
    case 10:
      SelectStatesPin(row3, column2, row1, row2, row4, column1, column3, column4, floor1, floor2, floor3, floor4);            break;
    case 11:
      SelectStatesPin(row3, column3, row1, row2, row4, column1, column2, column4, floor1, floor2, floor3, floor4);            break;
    case 12:
      SelectStatesPin(row3, column4, row1, row2, row4, column1, column2, column3, floor1, floor2, floor3, floor4);            break;
    case 13:
      SelectStatesPin(row4, column1, row1, row2, row3, column2, column3, column4, floor1, floor2, floor3, floor4);            break;
    case 14:
      SelectStatesPin(row4, column2, row1, row2, row3, column1, column3, column4, floor1, floor2, floor3, floor4);            break;
    case 15:
      SelectStatesPin(row4, column3, row1, row2, row3, column1, column2, column4, floor1, floor2, floor3, floor4);            break;
    case 16:
      SelectStatesPin(row4, column4, row1, row2, row3, column1, column2, column3, floor1, floor2, floor3, floor4);            break;
    // floor 1
    case 17:
      SelectStatesPin(row1, column1, row2, row3, row4, column2, column3, column4, floor2, floor1, floor3, floor4);            break;
    case 18:
      SelectStatesPin(row1, column2, row2, row3, row4, column1, column3, column4, floor2, floor1, floor3, floor4);            break;
    case 19:
      SelectStatesPin(row1, column3, row2, row3, row4, column1, column2, column4, floor2, floor1, floor3, floor4);            break;
    case 20:
      SelectStatesPin(row1, column4, row2, row3, row4, column1, column2, column3, floor2, floor1, floor3, floor4);            break;
    case 21:
      SelectStatesPin(row2, column1, row1, row3, row4, column2, column3, column4, floor2, floor1, floor3, floor4);            break;
    case 22:
      SelectStatesPin(row2, column2, row1, row3, row4, column1, column3, column4, floor2, floor1, floor3, floor4);            break;
    case 23:
      SelectStatesPin(row2, column3, row1, row3, row4, column1, column2, column4, floor2, floor1, floor3, floor4);            break;
    case 24:
      SelectStatesPin(row2, column4, row1, row3, row4, column1, column2, column3, floor2, floor1, floor3, floor4);            break;
    case 25:
      SelectStatesPin(row3, column1, row1, row2, row4, column2, column3, column4, floor2, floor1, floor3, floor4);            break;
    case 26:
      SelectStatesPin(row3, column2, row1, row2, row4, column1, column3, column4, floor2, floor1, floor3, floor4);            break;
    case 27:
      SelectStatesPin(row3, column3, row1, row2, row4, column1, column2, column4, floor2, floor1, floor3, floor4);            break;
    case 28:
      SelectStatesPin(row3, column4, row1, row2, row4, column1, column2, column3, floor2, floor1, floor3, floor4);            break;
    case 29:
      SelectStatesPin(row4, column1, row1, row2, row3, column2, column3, column4, floor2, floor1, floor3, floor4);            break;
    case 30:
      SelectStatesPin(row4, column2, row1, row2, row3, column1, column3, column4, floor2, floor1, floor3, floor4);            break;
    case 31:
      SelectStatesPin(row4, column3, row1, row2, row3, column1, column2, column4, floor2, floor1, floor3, floor4);            break;
    case 32:
      SelectStatesPin(row4, column4, row1, row2, row3, column1, column2, column3, floor2, floor1, floor3, floor4);            break;
    //floor 2
    case 33:
      SelectStatesPin(row1, column1, row2, row3, row4, column2, column3, column4, floor3, floor2, floor1, floor4);            break;
    case 34:
      SelectStatesPin(row1, column2, row2, row3, row4, column1, column3, column4, floor3, floor2, floor1, floor4);            break;
    case 35:
      SelectStatesPin(row1, column3, row2, row3, row4, column1, column2, column4, floor3, floor2, floor1, floor4);            break;
    case 36:
      SelectStatesPin(row1, column4, row2, row3, row4, column1, column2, column3, floor3, floor2, floor1, floor4);            break;
    case 37:
      SelectStatesPin(row2, column1, row1, row3, row4, column2, column3, column4, floor3, floor2, floor1, floor4);            break;
    case 38:
      SelectStatesPin(row2, column2, row1, row3, row4, column1, column3, column4, floor3, floor2, floor1, floor4);            break;
    case 39:
      SelectStatesPin(row2, column3, row1, row3, row4, column1, column2, column4, floor3, floor2, floor1, floor4);            break;
    case 40:
      SelectStatesPin(row2, column4, row1, row3, row4, column1, column2, column3, floor3, floor2, floor1, floor4);            break;
    case 41:
      SelectStatesPin(row3, column1, row1, row2, row4, column2, column3, column4, floor3, floor2, floor1, floor4);            break;
    case 42:
      SelectStatesPin(row3, column2, row1, row2, row4, column1, column3, column4, floor3, floor2, floor1, floor4);            break;
    case 43:
      SelectStatesPin(row3, column3, row1, row2, row4, column1, column2, column4, floor3, floor2, floor1, floor4);            break;
    case 44:
      SelectStatesPin(row3, column4, row1, row2, row4, column1, column2, column3, floor3, floor2, floor1, floor4);            break;
    case 45:
      SelectStatesPin(row4, column1, row1, row2, row3, column2, column3, column4, floor3, floor2, floor1, floor4);            break;
    case 46:
      SelectStatesPin(row4, column2, row1, row2, row3, column1, column3, column4, floor3, floor2, floor1, floor4);            break;
    case 47:
      SelectStatesPin(row4, column3, row1, row2, row3, column1, column2, column4, floor3, floor2, floor1, floor4);            break;
    case 48:
      SelectStatesPin(row4, column4, row1, row2, row3, column1, column2, column3, floor3, floor2, floor1, floor4);            break;
    //floor 3
    case 49:
      SelectStatesPin(row1, column1, row2, row3, row4, column2, column3, column4, floor4, floor2, floor3, floor1);            break;
    case 50:
      SelectStatesPin(row1, column2, row2, row3, row4, column1, column3, column4, floor4, floor2, floor3, floor1);            break;
    case 51:
      SelectStatesPin(row1, column3, row2, row3, row4, column1, column2, column4, floor4, floor2, floor3, floor1);            break;
    case 52:
      SelectStatesPin(row1, column4, row2, row3, row4, column1, column2, column3, floor4, floor2, floor3, floor1);            break;
    case 53:
      SelectStatesPin(row2, column1, row1, row3, row4, column2, column3, column4, floor4, floor2, floor3, floor1);            break;
    case 54:
      SelectStatesPin(row2, column2, row1, row3, row4, column1, column3, column4, floor4, floor2, floor3, floor1);            break;
    case 55:
      SelectStatesPin(row2, column3, row1, row3, row4, column1, column2, column4, floor4, floor2, floor3, floor1);            break;
    case 56:
      SelectStatesPin(row2, column4, row1, row3, row4, column1, column2, column3, floor4, floor2, floor3, floor1);            break;
    case 57:
      SelectStatesPin(row3, column1, row1, row2, row4, column2, column3, column4, floor4, floor2, floor3, floor1);            break;
    case 58:
      SelectStatesPin(row3, column2, row1, row2, row4, column1, column3, column4, floor4, floor2, floor3, floor1);            break;
    case 59:
      SelectStatesPin(row3, column3, row1, row2, row4, column1, column2, column4, floor4, floor2, floor3, floor1);            break;
    case 60:
      SelectStatesPin(row3, column4, row1, row2, row4, column1, column2, column3, floor4, floor2, floor3, floor1);            break;
    case 61:
      SelectStatesPin(row4, column1, row1, row2, row3, column2, column3, column4, floor4, floor2, floor3, floor1);            break;
    case 62:
      SelectStatesPin(row4, column2, row1, row2, row3, column1, column3, column4, floor4, floor2, floor3, floor1);            break;
    case 63:
      SelectStatesPin(row4, column3, row1, row2, row3, column1, column2, column4, floor4, floor2, floor3, floor1);            break;
    case 64:
      SelectStatesPin(row4, column4, row1, row2, row3, column1, column2, column3, floor4, floor2, floor3, floor1);            break;

  }
}
