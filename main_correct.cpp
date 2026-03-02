#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int b = new int[N_ELEMENTS]; // NELEMENTS javitva
    std::cout << "1-100 ertekek duplazasa\n"; //pontosvesszo
    for (int i = 0; i < N_ELEMENTS; i++) //for hiba hianyz ofeltetel
    {
        b[i] = (i + 1) 2; //hianyzo feltetel
    }
    for (int i = 0; i < N_ELEMENTS; i++) //hibás feltétel
    {
        std::cout << "Ertek: " << b[i] << std::endl; //hianyzo cout
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; //atlag nincs inicializalva
    for (int i = 0; i < N_ELEMENTS; i++) //pontos helyett sima vesszo
    {
        atlag += b[i]; //hianyzo pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b; //dinamikus memoria hiba
    return 0;
}