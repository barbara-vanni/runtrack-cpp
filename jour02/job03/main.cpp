#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include "Pingouin.hpp"
#include <iostream>

int main() {

    Pingouin pingouin(1.5, 0.5, 2.0);

    pingouin.nager();
    pingouin.marcher();
    pingouin.sePresenter();

    Pingouin pingouin2(pingouin);

    pingouin2.setVitesseGlisse(1.0);
    pingouin2.setVitesseMarche(0.3);
    pingouin2.nager();
    pingouin2.marcher();
    pingouin2.glisser();

    Pingouin::afficherColonie();    {
        std::shared_ptr<Pingouin> pingouin1 = std::make_shared<Pingouin>();
        std::shared_ptr<Pingouin> pingouin2 = std::make_shared<Pingouin>();

        Pingouin::afficherColonie(); // Devrait afficher 2 pingouins
    }

    // Après la sortie du bloc, les pingouins seront détruits
    Pingouin::afficherColonie();

    Pingouin::afficherColonie(); // Devrait afficher 0 pingouin


    return 0;
}
