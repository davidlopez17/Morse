/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**    David Lopez                                                        **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 8;   // pin for speaker

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //    NO SE LLEGIR
  //N
  ratlla();
  punt();

  //O
  ratlla();
  ratlla();
  ratlla();
  
  //Espai entre lletres
  espaiL();

  //S
  punt();
  punt();
  punt();

  //E
  punt();

  //Espai entre lletres
  espaiL();

  //L   
  punt();
  ratlla();
  punt();
  punt();

  //L   
  punt();
  ratlla();
  punt();
  punt();

  //E
  punt();

  //G
  ratlla();
  ratlla();
  punt();

  //I
  punt();
  punt();

  //R
  punt();
  ratlla();
  punt();
 
}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}
