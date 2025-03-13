#include <FastLED.h>

// Global variables (make LisOhour and LisOlis accessible in loop)
int* LisOhour[12];
int* LisOlis[6];

int lengthsofnum[12] = {3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6};
int lisOleng[6] = {4, 10, 6, 7, 3, 4};

// LED array setup

// Global arrays (initialized with values)
    #define NUM_LEDS 100
    CRGB leds[NUM_LEDS];
int one[3] = {44, 45, 46};
int two[3] = {35, 34, 33};
int three[5] = {50, 51, 52, 53, 54};
int four[4] = {43, 42, 41};
int five[4] = {39, 38, 37, 36};
int six[3] = {47, 48, 49};
int seven[5] = {21, 20, 19, 18, 17};
int eight[5] = {22, 23, 24, 25, 26};
int nine[4] = {58, 57, 56, 55};
int ten[3] = {0, 1, 2};
int eleven[6] = {27, 28, 29, 30, 31, 32};
int twelve[6] = {16, 15, 14, 13, 12, 11};

int Half[4] = {87, 86, 85, 84};
int TwentyFive[10] = {87, 86, 85, 84, 83, 82, 81, 80, 79, 78};
int twenty[6] = {87, 86, 85, 84, 83, 82};
int quar[7] = {90, 91, 92, 93, 94, 95, 96};
int Ten[3] = {82, 81, 80};
int Funf[4] = {81, 80, 79, 78};

// FastLED setup function
void setup() {

    FastLED.addLeds<NEOPIXEL, 2>(leds, NUM_LEDS);


}

// Main loop function
void loop() {
    // Initialize LisOlis and LisOhour arrays
    LisOlis[0] = Half;
    LisOlis[1] = TwentyFive;
    LisOlis[2] = twenty;
    LisOlis[3] = quar;
    LisOlis[4] = Ten;
    LisOlis[5] = Funf;

    LisOhour[0] = one;
    LisOhour[1] = two;
    LisOhour[2] = three;
    LisOhour[3] = four;
    LisOhour[4] = five;
    LisOhour[5] = six;
    LisOhour[6] = seven;
    LisOhour[7] = eight;
    LisOhour[8] = nine;
    LisOhour[9] = ten;
    LisOhour[10] = eleven;
    LisOhour[11] = twelve;
    BIG BASS BOSANGA
    for (int godz = 0; godz < 12; ++godz) {
        for (int i = 0; i < lengthsofnum[godz]; i++) {
            leds[LisOhour[godz][i]] = CRGB::Red;
        }
        FastLED.show();
        delay(100);
        FastLED.clear();

        for (int el = 5; el > 0; --el) {
            for (int i = 0; i < lengthsofnum[godz]; i++) {
                leds[LisOhour[godz][i]] = CRGB::Red;
            }
            for (int x = 0; x < lisOleng[el]; ++x) {
                leds[LisOlis[el][x]] = CRGB::Red;
            }
            leds[66] = CRGB::Red;
            leds[67] = CRGB::Red;
            leds[68] = CRGB::Red;
            leds[69] = CRGB::Red;
            FastLED.show();
            delay(100);
            FastLED.clear();
        }

        for (int el = 1; el < 6; ++el) {
            for (int i = 0; i < lengthsofnum[godz]; i++) {
                leds[LisOhour[godz][i]] = CRGB::Red;
            }
            for (int x = 0; x < lisOleng[el]; ++x) {
                leds[LisOlis[el][x]] = CRGB::Red;
            }
            leds[77] = CRGB::Red;
            leds[78] = CRGB::Red;
            FastLED.show();
            delay(100);
            FastLED.clear();
        }
    }
}
