Version 4
SymbolType BLOCK
RECTANGLE Normal 336 144 -320 -128
TEXT 0 -16 Center 2 LT
WINDOW 0 0 -64 Center 2
WINDOW 39 14 87 Center 2
WINDOW 38 0 32 Center 2
SYMATTR SpiceLine uvautoretry=1 ovautoretry=1 ocautoretry=0
SYMATTR SpiceModel LTC4260
SYMATTR Prefix X
SYMATTR Description Hot Swap Controller with I2C Compatible Monitoring
SYMATTR ModelFile LTC4260.sub
PIN -112 -128 TOP 8
PINATTR PinName Sense
PINATTR SpiceOrder 1
PIN -224 -128 TOP 8
PINATTR PinName Vdd
PINATTR SpiceOrder 2
PIN -320 -80 LEFT 8
PINATTR PinName UV
PINATTR SpiceOrder 4
PIN -320 -16 LEFT 8
PINATTR PinName OV
PINATTR SpiceOrder 5
PIN -144 144 BOTTOM 8
PINATTR PinName GND
PINATTR SpiceOrder 6
PIN -320 48 LEFT 8
PINATTR PinName ON
PINATTR SpiceOrder 7
PIN 176 144 BOTTOM 8
PINATTR PinName Timer
PINATTR SpiceOrder 12
PIN 336 48 RIGHT 8
PINATTR PinName _BD_PRST
PINATTR SpiceOrder 14
PIN 336 -80 RIGHT 8
PINATTR PinName FB
PINATTR SpiceOrder 18
PIN 16 144 BOTTOM 8
PINATTR PinName INTVcc
PINATTR SpiceOrder 19
PIN 336 -16 RIGHT 8
PINATTR PinName GPIO
PINATTR SpiceOrder 20
PIN 224 -128 TOP 8
PINATTR PinName Source
PINATTR SpiceOrder 23
PIN 112 -128 TOP 8
PINATTR PinName Gate
PINATTR SpiceOrder 24
