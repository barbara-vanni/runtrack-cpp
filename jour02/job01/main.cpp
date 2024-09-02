#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include "Pingouin.hpp"
#include <iostream>

int main() {

    Pingouin pingouin(1.5, 0.5);

    pingouin.nager();
    pingouin.marcher();
    pingouin.sePrensenter();



    return 0;
}
