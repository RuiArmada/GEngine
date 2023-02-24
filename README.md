# GEngine

OpenGL based engine that parses a XML file containing a scene

## How to run

### Generator
Please execute main.cpp with
```
g++ .\src\generator\bezier.cpp .\src\generator\box.cpp .\src\generator\cone.cpp .\src\generator\main.cpp .\src\generator\plane.cpp .\src\generator\sphere.cpp .\src\generator\torus.cpp .\src\utils\point.cpp -Iinclude -o generator -std=c++11
```

### Engine

Run in this order

`mkdir build`

`cd build`

`cmake .. -DTOOLKITS_FOLDER:STRING=[full path to toolkits folder] -A Win32`

`cmake --build .`

`.\Debug\Engine.exe ../scenes/[XML File]`

## Authors
* [Ariana Lousada](https://github.com/arbl42)
* [Carolina Vila Chã](https://github.com/carolinavc99)
* [Rui Armada](https://github.com/RuiArmada)
* [Sofia Santos](https://github.com/RisingFisan)

## Grade

⭐ (15.35/20)
