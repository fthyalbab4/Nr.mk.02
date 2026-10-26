#!/usr/bin/env python3
from pathlib import Path
import zlib, base64
ROOT = Path(__file__).resolve().parents[2]
EXTRA = zlib.decompress(base64.b64decode('eJx9V19v2zYQ/yrCQQ0YbWTH8R+3aQvUQdZhW4ZiW4saCBhaOm1MlhIpK04R5H/f8UiZtpMBCWxJd7/j3R1P9zF5S9Js+W15c/O3c5Vc3V6/PCf7jc5B59+9jd3tDbJNPly+Jf2E+UNKJm7mBSwaknfjg/2l+7Epbd+5UxfJTuPxhIWUzFgWkMuzX8hLsnPxjw8nn0+c91e/dHdZ5IW5D/0BjUg/Z6GPTYasPwRejhv5Scz8dhoDL2T3G7CJ84zcRawdEBaRLGAppdGUJXE0plHWIjNKJkk8ZcDUNZOYycztg/w0YGOSxkBPyQAUQmZpxsKQ+LGX48iU99F718uAYZbMYTCD5ja5pm4odCNiRqa8+xW0e3/yuevAPLSB2e7GD4Upm1x1ruFmvTXJoyyOTQ09w9DJ6H2WJzQ19LJokmeG9nSSsIw6PvVi38S173qjYRLnkd9ME/fvqJc5SRyPm4nAxzRhbsi+GpUfj5yEuj5NTDp6CZsYlee6TFPyJs18wEA7ONbaEsBGvc1n8WJTlGEbNA6kx3zLcU4uz66vLs4cxyZ//122V5581+ve2Aoj/L2/Owz3OX8a+WywsZFmgG+PqM4kQ0csBCfJDjUC8KmbhW5aUfCfOpGYcr9wZcjSrKIXjQ0jFOfqo/rDhhHS1To1NDaQc0joxNhUo5aKoyYTo/qiqzaKI9rBFmUCeWNJ14/jUO1jmQCgT47IwA1TWlKCwxWheTJwPerMgOynV53lRAEQvToAog0hDVWLeAjjAi0cVDJkfhY0i9oUUDYMMpv8tUHgz6iCNpockw75udb2Wqh5ZBAoHISwGgvZ+FpYgTwA9NYL07QVanJBCoCFpVsKjO1DnbAAcp2SN9aJDYCuj5OwbhpZA3Z9NMC7aaQC8PoohHnTsBLoC1OBcFdHmdGYJTkVRA/834RCII9k88PGxhQ2MQ1baZBn/jyLLOwp/LLEcYKhxIjmkUFCaYNHav1RG6N7Y6knaiMrTzR6oTZC8UKDB2oDVA+Yw43ZHBl01JGPwX15qHkwhIgwdn1n6I6p5cURBD4vcBOyPXExTIh3miQiYsCLE9JI8zUSqosSG4GObG0V5LjYbZJGYFKUDSzOzUpBMSezJUmLbEY55DHI7FKBqsSg1L7C5urhQY2DEKFaGGLsghV/7G5D8pTSDDIuOmVxnhLhT4J+STEr+j8OF3H45AD5vOD4jMD4tKBYH1JoDRMBozHLtsRSaLILpVjvanlgWiZwX8OjNqEOT8gXp2xRmu4BNYLmE76A5ch6FG3W+2HB8sopq6yvfKNZDs1LrK70VIQs07WSUq3SK+7+FE5f3HmvITr8mbME4tsgTsgwzmLuVbILsQrSpciDM441g8x1zNIUsm67WMuVcucXvS7ZHmCAjCc0ksZuJn01CKGdA9Uk/BuklI6sQYtASLnpdn9xupdnypj8C2M4BaZfkXlGwxB4HC5ncdP9VCNB0cDhmOz9hAEVXg==')).decode()
EVAL = zlib.decompress(base64.b64decode('eJytVMtu2zAQ/BViQQwY0WM7ttO4TYs2aJMUaJGfQfCluBZjUaTIJYkLBP/3UqL8qJMP7cVc7sxwd7j0S6lKlX9vb25/O7fJ7c3d8zPZdzoHnX/3NnZ3N8g2+XD5gvQT5g8pmbiZF7BoSN6ND/aX7semtH3nTl0kO43HExZSMmNZQC7PfiEvyW7y48PJ5xPn/dWv3V0WeWHuQ39AI9LPWehjk5D1h8DLcSM/iZnfTmPghWx+AzZxnpG7iLUDwiKSBSylNJqyJI7GNMpaZEbJJImnDJi6ZBITZ24f5KcBG5M0BnpKBqAQMkszFobEj70cR6a8j967XgYMs2QOgxk0t8k1dUOhGxEzk5J3v4J2708+dx2YhzYw2934oTBlk6vONdysNyZ5lMWxqaFnGDoZvc/yhKaGXhZN8szQnk4SllHHp17sm7j2XW80TOI88ptp4v4d9TIniYtpJhI/0oS5IfsqVH48chLq+jQx6eglbGJUnus0JW/SzAcMtINjrS0BbNTbfBYvNkUZtkHjQHrMtxxzcnl2fTVxHJv8/XfZXnnyXa97YyuM8Pf+7jDc5/xp5LPBxkaaAb49ojqTDB2xEJwkO9QIwKduFrppRcF/6kRiynzhypClWUwvGhtGKM/VR/WHDSOkq3VqaGwg55DQibGpRi0VR00mRvVFV20UR7SDLQ==')).decode()
DECL = "\ndouble gml_esign(double val, double defv);\ndouble gml_invlerp(double a, double b, double v);\ndouble gml_gauss(double mean, double deviation);\ndouble gml_angle_wrap(double ang);\ndouble gml_angle_normalize(double ang);\ndouble gml_arcsin(double x);\ndouble gml_arccos(double x);\ndouble gml_is_equal(double a, double b);\ndouble gml_random_color(void);\ndouble gml_object_is_child_of(double child, double parent);\ndouble gml_string_width(const char *s);\ndouble gml_string_height(const char *s);\ndouble gml_string_letters(const char *s);\ndouble gml_string_pad(double number, double digits);\ndouble gml_string_trim(const char *s);\n"
b = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
e = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
h = ROOT / "app/src/main/cpp/include/gm82_gml_builtins.h"
if b.exists():
    t = b.read_text()
    if "gml_esign" not in t:
        for inc in ["#include <math.h>", "#include <string.h>", "#include <stdlib.h>"]:
            if inc not in t:
                t = inc + "\n" + t
        b.write_text(t + "\n" + EXTRA)
        print("builtins batch2")
    else:
        print("builtins ok")
if h.exists():
    t = h.read_text()
    t = t.replace("void gml_string_letters(const char *src, char *dst, size_t max_len);\n", "")
    if "gml_esign" not in t:
        idx = t.rfind("#endif")
        t = t[:idx] + "/* batch2 */\n" + DECL + t[idx:]
        print("header batch2")
    h.write_text(t)
    print("header written")
if e.exists():
    t = e.read_text()
    if 'strcmp(id, "esign")' not in t:
        for needle in ['if (strcmp(id, "instance_create_moving") == 0) {', 'if (strcmp(id, "instance_create") == 0) {']:
            if needle in t:
                e.write_text(t.replace(needle, EVAL + "\n        " + needle, 1))
                print("eval batch2")
                break
        else:
            print("eval needle missing")
    else:
        print("eval ok")
print("APPLY_SOURCE_MERGE_BATCH2_DONE")
