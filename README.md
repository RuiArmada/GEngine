# Graphical Engine

OpenGL based engine that parses a XML file containing a scene

## Authors
* [Rui Filipe Pimenta Armada](https://github.com/RuiArmada)
* [Carolina da Torre Vila Chã](https://github.com/carolinavc99)
* [Sofia Guilherme Rodrigues dos Santos](https://github.com/RisingFisan)
* [Ariana Raquel Barreira Lousada](https://github.com/AITK42)


## Generator
Please execute main.cpp with
```
g++ .\faseX\generator\bezier.cpp .\faseX\generator\box.cpp .\faseX\generator\cone.cpp .\faseX\generator\main.cpp .\faseX\generator\plane.cpp .\faseX\generator\sphere.cpp .\faseX\generator\torus.cpp .\faseX\utils\point.cpp -Iinclude -o generator -std=c++11
```

## Engine

Run in this order

`mkdir build`

`cd build`

`cmake .. -DTOOLKITS_FOLDER:STRING=[path to toolkits folder] -A Win32`

`cmake --build .`

`.\Debug\Engine.exe [XML File]`

## Grade

⭐ (15.35/20)
