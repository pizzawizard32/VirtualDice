![VirtualDice](https://github.com/pizzawizard32/VirtualDice/blob/main/virtualdice.png?raw=true)

A simple program for rolling dices that uses a similiar layout to neofetch.

## Supported OSes
- Windows NT (tested on Windows 2000 and higher, lmk if it works on older Windows)

**Future support for:**
- Linux
- Haiku
- Nintendo 3DS
- FreeBSD
- more

## What's new? (1.1.0)
```diff
+ Added custom number limit
- Removed number rating
```

## Compilation
This is a tutorial of how to compile the program as I found out myself that the already compiled program on Windows 2000 is broken:
- `git clone` the source code:
  ```cmd
  git clone https://github.com/pizzawizard32/VirtualDice
  ```
- Compile `main.cc` with MinGW, install it if you haven't.
  ```cmd
  g++ main.cc
  ```
- Rename the program from `a.exe` to `dice.exe`
  ```cmd
  ren a.exe dice.exe
  ```
- Set it as your PATH
- You're done and ready to run VirtualDice 1.1.0! :D (no its not a factorial number sorry)

## Credits
color-console (color.hpp): aafulei
