# Konwerter liczb rzymskich i arabskich

Prosty program konsolowy w C++, który umożliwia konwersję:

- z liczb rzymskich na arabskie
- z liczb arabskich na rzymskie

Program działa w trybie tekstowym i udostępnia menu wyboru po uruchomieniu. Obsługa obu kierunków konwersji jest zrealizowana w osobnych funkcjach, a w projekcie znajdują się też proste testy jednostkowe. 

---

## Funkcje programu

Po uruchomieniu program wyświetla menu:

1. Rzymska do Arabskiej  
2. Arabska do Rzymskiej  
3. Zakończ  

Użytkownik wybiera opcję, wpisuje wartość i otrzymuje wynik konwersji. :contentReference[oaicite:4]{index=4}

---

## Jak działa

### Arabska → Rzymska
Konwersja z liczby arabskiej do rzymskiej odbywa się przez przechodzenie po kolejnych wartościach:

`1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1`

i dopisywanie odpowiadających im symboli rzymskich do wyniku. :contentReference[oaicite:5]{index=5}

### Rzymska → Arabska
Konwersja z liczby rzymskiej do arabskiej działa przez sprawdzanie, czy napis zaczyna się od danego symbolu rzymskiego, a następnie dodanie jego wartości i usunięcie tego fragmentu z początku tekstu. :contentReference[oaicite:6]{index=6}

---

## Testy

W projekcie znajdują się przykładowe testy:

- `Decimal2RomanUnitTest()` – sprawdza podstawową poprawność konwersji
- `Chain_UnitTest(...)` – wykonuje testy losowe, sprawdzając czy konwersja:
  
  liczba arabska → liczba rzymska → liczba arabska
  
  daje z powrotem tę samą wartość. :contentReference[oaicite:7]{index=7} :contentReference[oaicite:8]{index=8}

---

## Wymagania

- kompilator C++ z obsługą **C++17**
- **CMake 3.6.2** lub nowszy :contentReference[oaicite:9]{index=9}

---

## Struktura projektu

Obecny `CMakeLists.txt` zakłada taką strukturę katalogów:

```text
projekt/
├── CMakeLists.txt
├── src/
│   ├── main.cpp
│   └── converter.cpp
└── include/
    └── converter.h
