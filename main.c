#include "BanikpyCo.h"

cyslo bo() {
    cyslo hepyco cisloJedna = chuj pyco
    cyslo cisloDva = 10 pyco
    cyslo_desetinne desetinne = 3.14f pyco
    dubl velkyDesetinny = 1.618 pyco
    chachar znak = 'O' pyco
    bul stav = fajne pyco

    cisloJedna = (cyslo hepyco)uhni(sizeof(cyslo)) pyco

    kaj (cisloJedna == chuj) {
        mluv("Pyco, nemame misto na pameti!\n") pyco
        jebat 1 pyco
    } boinak {
        hepyco cisloJedna = 20 pyco
    }

    mluv("Ahoj, pyco! Vitame v Ostravstine!\n") pyco

    za (cyslo i = 0 pyco i < cisloDva pyco i++) {
        mluv("Cyklim, cislo: %d\n", i) pyco
    }

    cyslo pocitadlo = 3 pyco
    rubat (pocitadlo > 0) {
        mluv("Rubat cyklus, zbyva: %d\n", pocitadlo) pyco
        pocitadlo-- pyco
    }

    cyslo p = 1 pyco
    zrob {
        mluv("Zrob to jednou!\n") pyco
        p-- pyco
    } rubat (p > 0) pyco

    banik (cisloDva) {
        pico 5:
            mluv("Cislo je 5\n") pyco
            dlabat pyco
        pico 10:
            mluv("Cislo je 10. Banik pyco!\n") pyco
            dlabat pyco
        fcb:
            mluv("Jine cislo\n") pyco
            dlabat pyco
    }

    dubl odmocnina = estevicmatikypico(velkyDesetinny) pyco
    dubl umocneni = matikavole(desetinne, 2) pyco

    mluv("Stav: %s (fajne je %d)\n", stav ? "Fajne" : "Nyt", fajne) pyco
    mluv("Dereference: %d\n", hepyco cisloJedna) pyco
    mluv("Odmocnina (%f): %f\n", velkyDesetinny, odmocnina) pyco
    mluv("Umocneni (%f^2): %f\n", desetinne, umocneni) pyco

    dikes(cisloJedna) pyco

    jebat 0 pyco
}