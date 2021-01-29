#ifndef EASING // HEADER GUARD
#define EASING

#include <cmath>

#ifndef EASING_PI // HEADER GUARD
#define EASING_PI 3.14159
#endif

namespace Easing
{
    inline float InSine(float t) {
        return sin(1.5707963 * t);
    }

    inline float OutSine(float t) {
        return 1 + sin(1.5707963 * (--t));
    }

    inline float InOutSine(float t) {
        return 0.5 * (1 + sin(3.1415926 * (t - 0.5)));
    }

    inline float InQuad(float t) {
        return t * t;
    }

    inline float OutQuad(float t) {
        return t * (2 - t);
    }

    inline float InOutQuad(float t) {
        return t < 0.5 ? 2 * t * t : t * (4 - 2 * t) - 1;
    }

    inline float InCubic(float t) {
        return t * t * t;
    }

    inline float OutCubic(float t) {
        return 1 + (--t) * t * t;
    }

    inline float InOutCubic(float t) {
        return t < 0.5 ? 4 * t * t * t : 1 + (--t) * (2 * (--t)) * (2 * t);
    }

    inline float InQuart(float t) {
        t *= t;
        return t * t;
    }

    inline float OutQuart(float t) {
        t = (--t) * t;
        return 1 - t * t;
    }

    inline float InOutQuart(float t) {
        if (t < 0.5) {
            t *= t;
            return 8 * t * t;
        }
        else {
            t = (--t) * t;
            return 1 - 8 * t * t;
        }
    }

    inline float InQuint(float t) {
        double t2 = t * t;
        return t * t2 * t2;
    }

    inline float OutQuint(float t) {
        double t2 = (--t) * t;
        return 1 + t * t2 * t2;
    }

    inline float InOutQuint(float t) {
        double t2;
        if (t < 0.5) {
            t2 = t * t;
            return 16 * t * t2 * t2;
        }
        else {
            t2 = (--t) * t;
            return 1 + 16 * t * t2 * t2;
        }
    }

    inline float InExpo(float t) {
        return (pow(2, 8 * t) - 1) / 255;
    }

    inline float OutExpo(float t) {
        return 1 - pow(2, -8 * t);
    }

    inline float InOutExpo(float t) {
        if (t < 0.5) {
            return (pow(2, 16 * t) - 1) / 510;
        }
        else {
            return 1 - 0.5 * pow(2, -16 * (t - 0.5));
        }
    }

    inline float InCirc(float t) {
        return 1 - sqrt(1 - t);
    }

    inline float OutCirc(float t) {
        return sqrt(t);
    }

    inline float InOutCirc(float t) {
        if (t < 0.5) {
            return (1 - sqrt(1 - 2 * t)) * 0.5;
        }
        else {
            return (1 + sqrt(2 * t - 1)) * 0.5;
        }
    }

    inline float InBack(float t) {
        return t * t * (2.70158 * t - 1.70158);
    }

    inline float OutBack(float t) {
        return 1 + (--t) * t * (2.70158 * t + 1.70158);
    }

    inline float InOutBack(float t) {
        if (t < 0.5) {
            return t * t * (7 * t - 2.5) * 2;
        }
        else {
            return 1 + (--t) * t * 2 * (7 * t + 2.5);
        }
    }

    inline float InElastic(float t) {
        double t2 = t * t;
        return t2 * t2 * sin(t * EASING_PI * 4.5);
    }

    inline float OutElastic(float t) {
        double t2 = (t - 1) * (t - 1);
        return 1 - t2 * t2 * cos(t * EASING_PI * 4.5);
    }

    inline float InOutElastic(float t) {
        double t2;
        if (t < 0.45) {
            t2 = t * t;
            return 8 * t2 * t2 * sin(t * EASING_PI * 9);
        }
        else if (t < 0.55) {
            return 0.5 + 0.75 * sin(t * EASING_PI * 4);
        }
        else {
            t2 = (t - 1) * (t - 1);
            return 1 - 8 * t2 * t2 * sin(t * EASING_PI * 9);
        }
    }

    inline float InBounce(float t) {
        return pow(2, 6 * (t - 1)) * abs(sin(t * EASING_PI * 3.5));
    }

    inline float OutBounce(float t) {
        return 1 - pow(2, -6 * t) * abs(cos(t * EASING_PI * 3.5));
    }

    inline float InOutBounce(float t) {
        if (t < 0.5) {
            return 8 * pow(2, 8 * (t - 1)) * abs(sin(t * EASING_PI * 7));
        }
        else {
            return 1 - 8 * pow(2, -8 * t) * abs(sin(t * EASING_PI * 7));
        }
    }
}

#endif // HEADER GUARD END