# GEngine

OpenGL based engine that parses a XML file containing a scene

## Authors
* [Ariana Lousada](https://github.com/arbl42)
* [Carolina Vila Chã](https://github.com/carolinavc99)
* [Rui Armada](https://github.com/RuiArmada)
* [Sofia Santos](https://github.com/RisingFisan)

## How to run

### Generator
Please execute main.cpp with
```
g++ .\src\code\generator\shapes\bezier.cpp .\src\code\generator\shapes\box.cpp .\src\code\generator\shapes\cone.cpp .\src\code\generator\generator.cpp .\faseX\generator\shapes\plane.cpp .\src\code\generator\shapes\sphere.cpp .\src\code\generator\shapes\torus.cpp .\src\code\utils\point.cpp -Iinclude -o generator -std=c++11
```

### Engine

Run in this order

`mkdir build`

`cd build`

`cmake .. -DTOOLKITS_FOLDER:STRING=[path to toolkits folder] -A Win32`

`cmake --build .`

`.\Debug\Engine.exe [XML File]`

## Grade

⭐ (15.35/20)
