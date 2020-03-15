int SwitchPinOne = 7;
int SwitchPinTwo = 8;
int Motorspeed = 9;

int x = 0;

void setup()
{
    pinMode(SwitchPinOne, INPUT);
    pinMode(SwitchPinTwo, INPUT);
    pinMode(Motorspeed, OUTPUT);
}

void loop()
{
    if (LOW == digitalRead(SwitchPinOne))
    {
        x = x + 100;
        analogWrite(Motorspeed, x);
        delay(1000);
    }
    if (LOW == digitalRead(SwitchPinTwo))
    {
        x = x - 100;
        analogWrite(Motorspeed, x);
        delay(1000);
    }
}
