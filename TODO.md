# TODO.md — خطة التطوير والإصلاح الصارمة لمحرك GM82 Android

الهدف النهائي: تشغيل ألعاب GMK/GM82 على أندرويد بأقرب أداء وتطابق ممكن مع نسخة ويندوز المحمولة، بخطوات متتابعة واقعية بدون ادعاء أو هلاوس.

---

## 🎯 مراحل خطة الإصلاح والتطوير

### المرحلة 1: فك موارد GMK الشامل
- [x] فك هيدر GMK وتحديد إصدارات GMK (v800/v810).
- [x] فك كتل zlib المضغوطة واستخراج السبرايتات، الخلفيات، الأصوات، والغرف.
- [ ] دعم تراكيب Chunks المتغيرة لعينات ألعاب GMK القديمة جداً (v400 - v600).

### المرحلة 2: دعم GML VM ومكتبات GM82Core
- [x] دعم الحلقات (`while`, `repeat`, `do...until`), والشرطيات (`if...else`), وتعيين المتغيرات.
- [x] حزمة الرياضيات المتقدمة من GM82Core (`angle_difference`, `approach`, `circle_in_circle`, `clerp2`, `cosine`, إلخ).
- [x] بنى البيانات (`ds_list` sort/shuffle, `ds_map`, `ds_stack`, `ds_queue`, `ds_priority`).
- [x] عمليات شبكات البيانات `ds_grid` (create, resize, clear, set, get, add, multiply, copy).
- [ ] توسيع مفسر bytecode المترجم الكامل لمضاهاة الدوال الثنائية في VM الداخلي.

### المرحلة 3: أقنعة التصادم Per-Pixel الدقيقة
- [x] توليد أقنعة البكسل 1-bit (`gm82_frame_build_bitmask`) لجميع فريمات السبرايتات من بيانات RGBA.
- [x] تفعيل فحص البكسل الشفاف وغير الشفاف (`prec=1`) في دوال `collision_point`, `collision_rectangle`, `collision_circle`, `collision_line`, `collision_ellipse`.
- [x] توفير دالة `gml_place_meeting_precise` لتصادم الكائنات الدقيق على مستوى البكسل.

### المرحلة 4: خط تصيير العتاد المباشر OpenGL ES
- [x] بناء هيكل إدارة الأطلس وتجهيز الـ Textures في `gm82_gl_textures`.
- [ ] ربط الـ EGL context الحالي عبر GLSurfaceView وإجراء الرسم عبر VBO وأوامر GLES2 مباشرة على الشاشة.

### المرحلة 5: محرك صوتي منخفض التأخير بـ OpenSL ES / AAudio
- [x] طابور أوامر الصوت البرمجي والتحكم بالصوت والـ Pitch والـ Pan.
- [x] الربط بـ SoundPool و Web Audio.
- [ ] بناء Backend صوتي مباشر عبر OpenSL ES / AAudio في C للوصول لزمن استجابة يقارب الصفر.

### المرحلة 6: تكامل ملحقات GM82Core كاملة
- [x] دمج دوال GM82Core الأساسية في C و GML VM.
- [ ] دعم الأنظمة المتقدمة (Surfaces, Part Systems, Blend Modes).
