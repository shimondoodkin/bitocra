:: bdf2c is from https://github.com/shimondoodkin/bdf2c , a fork of https://github.com/pixelmatix/bdf2c
::
:: font usage example
:: https://github.com/pixelmatix/SmartMatrix/blob/master/src/MatrixFont.cpp
:: https://github.com/pixelmatix/SmartMatrix/blob/e45564d08d5e2fc4b091aca00e55e94280a95fb5/src/MatrixFont.cpp


bdf2c.exe -C font.h

bdf2c.exe -b < 4thD.bdf  >             4thD.c
bdf2c.exe -b < 5thElement.bdf  >       5thElement.c
bdf2c.exe -b < bitbuntu.bdf  >         bitbuntu.c
bdf2c.exe -b < bitbuntu-full.bdf  >    bitbuntu-full.c
bdf2c.exe -b < bitocra.bdf  >          bitocra.c
bdf2c.exe -b < bitocra-13.bdf  >       bitocra-13.c 
bdf2c.exe -b < bitocra-13-full.bdf  >  bitocra-13-full.c
bdf2c.exe -b < bitocra7.bdf  >         bitocra7.c
bdf2c.exe -b < bitocra-full.bdf  >     bitocra-full.c
