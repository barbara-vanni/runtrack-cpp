#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include "Pingouin.hpp"
#include <iostream>

int main() {

    Pingouin pingouin(1.5, 0.5, 2.0);

    pingouin.nager();
    pingouin.marcher();
    pingouin.sePrensenter();

    Pingouin pingouin2(pingouin);

    pingouin2.setVitesseGlisse(1.0);
    pingouin2.setVitesseMarche(0.3);
    pingouin2.nager();
    pingouin2.marcher();
    pingouin2.glisser();

    //destruction of pingouin
    ~pingouin;
    ~pingouin2;

    return 0;
}
