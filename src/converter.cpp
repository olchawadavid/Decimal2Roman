#include <algorithm>>
#include <cassert>
#include <iostream>
#include <random>
#include <string>
#include <tuple>
#include <vector>

#include "converter.h"

using std::cout, std::tuple, std::string, std::vector, std::endl, std::cin, std::random_device;

auto converter( int val ) {

    std::string result{};

    const vector<tuple<int, string>> base{
        { 1000, "M" }, { 900, "CM" }, { 500, "D" }, { 400, "CD" }, { 100, "C" }, { 90, "XC" }, { 50, "L" }, { 40, "XL" }, { 10, "X" }, { 9, "IX" }, { 5, "V" }, { 4, "IV" }, { 1, "I" } };

    for ( auto &[decimal_val, roman_val] : base )
        while ( val >= decimal_val )
            result += roman_val, val -= decimal_val;

    return result;
};
void Decimal2Roman() {
    cout << "Podaj liczbe: ";
    int val{};
    cin >> val;
    cout << converter( val ) << endl;
}

auto RomanToDecimal( string roman ) {
    auto result{ 0 };

    const vector<tuple<int, string>> base{
        { 1000, "M" }, { 900, "CM" }, { 500, "D" }, { 400, "CD" }, { 100, "C" }, { 90, "XC" }, { 50, "L" }, { 40, "XL" }, { 10, "X" }, { 9, "IX" }, { 5, "V" }, { 4, "IV" }, { 1, "I" } };

    for ( const auto &[decimal_val, roman_val] : base )
        while ( roman._Starts_with( roman_val ) )
            result += decimal_val, roman.erase( 0, roman_val.length() );

    return result;
};

bool Decimal2RomanUnitTest( void ) {
    assert( converter( 20 ) == "XX" );
    assert( RomanToDecimal( "XX" ) == 20 );
    return true;
};

auto createRandomVector( const int kFrom, const int kTo, const int kNumOfTrials ) {
    random_device rd;
    std::mt19937 mtRandomEngine( rd() );
    std::uniform_int_distribution uni_distr( kFrom, kTo );

    vector<int> random_decimals;

    generate_n( back_inserter( random_decimals ), kNumOfTrials, [&]() { return uni_distr( mtRandomEngine ); } );

    return random_decimals;
};

bool Chain_UnitTest( const int kFrom, const int kTo, const int kNumOfTrials ) {
    for ( const auto &val : createRandomVector( kFrom, kTo, kNumOfTrials ) ) {
        if ( RomanToDecimal( converter( val ) ) != val )
            return false;
        cout << "Jest dobrze" << endl;
    }

    return true;
}

void Roman2Decimal() {
    cout << "Podaj liczbe rzymska: ";
    string val{ "" };
    cin >> val;
    cout << RomanToDecimal( val ) << endl;
}