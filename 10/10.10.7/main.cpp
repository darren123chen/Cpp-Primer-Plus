#include "header.h"

int main() {
    Plorg my_plorg;
    my_plorg.showPlorg();
    my_plorg.setCI(51);

    Plorg my_plorg2("NewPlorg", 159);
    my_plorg2.showPlorg();
    return 0;
}
