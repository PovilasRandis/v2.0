#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "header.hpp"

TEST_CASE("Studentas klases funkcionalumo tikrinimas", "[Studentas]") 
{
    Studentas Studentas;

    REQUIRE(Studentas.getVardas() == "");
    REQUIRE(Studentas.getPavarde() == "");
    SECTION("Vardo ir pavardes priskyrimas") {
        Studentas.setVardas("Vardenis", "Pavardenis");

        REQUIRE(Studentas.getVardas() == "Vardenis");
        REQUIRE(Studentas.getPavarde() == "Pavardenis");
    }

    SECTION("Galutinio balo priskyrimas") {
        Studentas.setFinal(10);

        REQUIRE(Studentas.getFinal() == 10);
    }

    SECTION("Pilnas klases inicializavimas") {
        Stud Studentas("Povilas", "Randis", 10);

        REQUIRE(Studentas.getVardas() == "Povilas");
        REQUIRE(Studentas.getPavarde() == "Randis");
        REQUIRE(Studentas.getFinal() == 10);
    }
}