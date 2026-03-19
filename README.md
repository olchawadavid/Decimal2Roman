# Konwerter liczb rzymskich i arabskich

Program wykonano na zaliczenie zadania na studiach.
Prosty program konsolowy napisany w **C++**, który umożliwia konwersję liczb:

- z systemu **arabskiego na rzymski**
- z systemu **rzymskiego na arabski**

Projekt został przygotowany jako aplikacja uruchamiana w terminalu, z prostym menu wyboru oraz funkcjami realizującymi oba kierunki konwersji.

---

## Funkcjonalności

Program pozwala na:

- konwersję liczby arabskiej na rzymską
- konwersję liczby rzymskiej na arabską
- obsługę programu przez menu tekstowe
- uruchamianie prostych testów funkcji konwertujących

---

## Jak działa program

Po uruchomieniu użytkownik wybiera jedną z opcji:

1. Rzymska do Arabskiej  
2. Arabska do Rzymskiej  
3. Zakończ  

Następnie wpisuje wartość, a program zwraca wynik konwersji.

---

## Technologie

Projekt wykorzystuje:

- **C++17**
- **CMake**
- standardowe biblioteki języka C++

---

## Wymagania

Aby zbudować projekt, potrzebujesz:

- kompilatora C++ obsługującego **C++17**
- **CMake 3.6.2** lub nowszego

Przykładowe kompilatory:

- **Windows**: MSVC (Visual Studio)
- **Linux**: g++
- **macOS**: clang++

---

## Struktura projektu

Przykładowa struktura projektu:

```text
Decimal2Roman/
├── CMakeLists.txt
├── include/
│   └── converter.h
├── src/
│   ├── converter.cpp
│   └── main.cpp
├── build_win/
├── build_linux/
└── build_mac/
