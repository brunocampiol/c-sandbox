# C Code Sandbox

## C in Windows

### MinGW (Minimalist GNU for Windows)

Install via chocolatey MinGW-w64

Once installed, gcc in terminal should recognize "gcc -v"

Binary installation usually is 

* C:\ProgramData\mingw64\mingw64\bin\gcc.exe

C Libraries are located in

* C:\ProgramData\mingw64\mingw64\x86_64-w64-mingw32\include
* C:\ProgramData\mingw64\mingw64\lib\gcc\x86_64-w64-mingw32\13.2.0\include

### VS Code

#### Extensions:
* C/C++ Microsoft
* C/C++ Compile Run - danielpinto8zz6
		
#### Shortcuts:
* F5 start debug
* F7

#### Fix VS Code #include errors

1. Create a .vscode folder in project root
1. In created folder, create a file named c_cpp_properties.json
1. Paste below json data and update as needed


```json
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**",
                "C:\\ProgramData\\mingw64\\mingw64\\x86_64-w64-mingw32\\include",
                "C:\\ProgramData\\mingw64\\mingw64\\lib\\gcc\\x86_64-w64-mingw32\\13.2.0\\include"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "windowsSdkVersion": "10.0.22621.0",
            "compilerPath": "cl.exe",
            "cStandard": "c17",
            "cppStandard": "c++17",
            "intelliSenseMode": "windows-msvc-x64"
        }
    ],
    "version": 4
}
```




https://www.geeksforgeeks.org/multiply-large-numbers-represented-as-strings/

18446744073709551615

99999999999999999999

1235421415454545454545454544

1714546546546545454544548544544545
