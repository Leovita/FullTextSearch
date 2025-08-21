#ifndef java_util_Locale_H
#define java_util_Locale_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class List;
    class Set;
    class Locale$FilteringMode;
    class MissingResourceException;
    class Locale$Category;
    class Locale;
    class Locale$LanguageRange;
    class Locale$IsoCountryCode;
  }
  namespace lang {
    class Class;
    class String;
    class Cloneable;
    class Character;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Locale : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0d82408c6e55bc30,
        mid_init$_3d104da0b5c75e64,
        mid_init$_f8f56bd17402e3b3,
        mid_caseFoldLanguageTag_cb0eb1432185fc94,
        mid_clone_5655ed8670534604,
        mid_equals_570b5248a6da3ef6,
        mid_filter_a2b130d8ba777baa,
        mid_filter_f74fc631a89c7c36,
        mid_filterTags_a2b130d8ba777baa,
        mid_filterTags_f74fc631a89c7c36,
        mid_forLanguageTag_3879b352b9bdbdfc,
        mid_getAvailableLocales_3d06acbf6689fb6c,
        mid_getCountry_09a7afff1868fc5e,
        mid_getDefault_319fd40ee3061260,
        mid_getDefault_d53a8be2d46424c8,
        mid_getDisplayCountry_09a7afff1868fc5e,
        mid_getDisplayCountry_d2a6991e8d2aa45a,
        mid_getDisplayLanguage_09a7afff1868fc5e,
        mid_getDisplayLanguage_d2a6991e8d2aa45a,
        mid_getDisplayName_09a7afff1868fc5e,
        mid_getDisplayName_d2a6991e8d2aa45a,
        mid_getDisplayScript_09a7afff1868fc5e,
        mid_getDisplayScript_d2a6991e8d2aa45a,
        mid_getDisplayVariant_09a7afff1868fc5e,
        mid_getDisplayVariant_d2a6991e8d2aa45a,
        mid_getExtension_a72e49fe21aa75fa,
        mid_getExtensionKeys_4df174295554d7bd,
        mid_getISO3Country_09a7afff1868fc5e,
        mid_getISO3Language_09a7afff1868fc5e,
        mid_getISOCountries_6da8f3ea65e22733,
        mid_getISOCountries_f93ef858d4ae2877,
        mid_getISOLanguages_6da8f3ea65e22733,
        mid_getLanguage_09a7afff1868fc5e,
        mid_getScript_09a7afff1868fc5e,
        mid_getUnicodeLocaleAttributes_4df174295554d7bd,
        mid_getUnicodeLocaleKeys_4df174295554d7bd,
        mid_getUnicodeLocaleType_cb0eb1432185fc94,
        mid_getVariant_09a7afff1868fc5e,
        mid_hasExtensions_947277eca0748c4e,
        mid_hashCode_20fbf7565993c3d7,
        mid_lookup_1331ea70d5f80184,
        mid_lookupTag_d8a95187253b272c,
        mid_of_3879b352b9bdbdfc,
        mid_of_c2df9da857a4916a,
        mid_of_8d6b8d5407909c48,
        mid_setDefault_25a056d06ffd1209,
        mid_setDefault_2698b06e38ef58f4,
        mid_stripExtensions_319fd40ee3061260,
        mid_toLanguageTag_09a7afff1868fc5e,
        mid_toString_09a7afff1868fc5e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Locale(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Locale(const Locale& obj) : ::java::lang::Object(obj) {}

      static Locale *CANADA;
      static Locale *CANADA_FRENCH;
      static Locale *CHINA;
      static Locale *CHINESE;
      static Locale *ENGLISH;
      static Locale *FRANCE;
      static Locale *FRENCH;
      static Locale *GERMAN;
      static Locale *GERMANY;
      static Locale *ITALIAN;
      static Locale *ITALY;
      static Locale *JAPAN;
      static Locale *JAPANESE;
      static Locale *KOREA;
      static Locale *KOREAN;
      static Locale *PRC;
      static jchar PRIVATE_USE_EXTENSION;
      static Locale *ROOT;
      static Locale *SIMPLIFIED_CHINESE;
      static Locale *TAIWAN;
      static Locale *TRADITIONAL_CHINESE;
      static Locale *UK;
      static jchar UNICODE_LOCALE_EXTENSION;
      static Locale *US;

      Locale(const ::java::lang::String &);
      Locale(const ::java::lang::String &, const ::java::lang::String &);
      Locale(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

      static ::java::lang::String caseFoldLanguageTag(const ::java::lang::String &);
      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      static ::java::util::List filter(const ::java::util::List &, const ::java::util::Collection &);
      static ::java::util::List filter(const ::java::util::List &, const ::java::util::Collection &, const ::java::util::Locale$FilteringMode &);
      static ::java::util::List filterTags(const ::java::util::List &, const ::java::util::Collection &);
      static ::java::util::List filterTags(const ::java::util::List &, const ::java::util::Collection &, const ::java::util::Locale$FilteringMode &);
      static Locale forLanguageTag(const ::java::lang::String &);
      static JArray< Locale > getAvailableLocales();
      ::java::lang::String getCountry() const;
      static Locale getDefault();
      static Locale getDefault(const ::java::util::Locale$Category &);
      ::java::lang::String getDisplayCountry() const;
      ::java::lang::String getDisplayCountry(const Locale &) const;
      ::java::lang::String getDisplayLanguage() const;
      ::java::lang::String getDisplayLanguage(const Locale &) const;
      ::java::lang::String getDisplayName() const;
      ::java::lang::String getDisplayName(const Locale &) const;
      ::java::lang::String getDisplayScript() const;
      ::java::lang::String getDisplayScript(const Locale &) const;
      ::java::lang::String getDisplayVariant() const;
      ::java::lang::String getDisplayVariant(const Locale &) const;
      ::java::lang::String getExtension(jchar) const;
      ::java::util::Set getExtensionKeys() const;
      ::java::lang::String getISO3Country() const;
      ::java::lang::String getISO3Language() const;
      static JArray< ::java::lang::String > getISOCountries();
      static ::java::util::Set getISOCountries(const ::java::util::Locale$IsoCountryCode &);
      static JArray< ::java::lang::String > getISOLanguages();
      ::java::lang::String getLanguage() const;
      ::java::lang::String getScript() const;
      ::java::util::Set getUnicodeLocaleAttributes() const;
      ::java::util::Set getUnicodeLocaleKeys() const;
      ::java::lang::String getUnicodeLocaleType(const ::java::lang::String &) const;
      ::java::lang::String getVariant() const;
      jboolean hasExtensions() const;
      jint hashCode() const;
      static Locale lookup(const ::java::util::List &, const ::java::util::Collection &);
      static ::java::lang::String lookupTag(const ::java::util::List &, const ::java::util::Collection &);
      static Locale of(const ::java::lang::String &);
      static Locale of(const ::java::lang::String &, const ::java::lang::String &);
      static Locale of(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
      static void setDefault(const Locale &);
      static void setDefault(const ::java::util::Locale$Category &, const Locale &);
      Locale stripExtensions() const;
      ::java::lang::String toLanguageTag() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Locale);
    extern PyTypeObject *PY_TYPE(Locale);

    class t_Locale {
    public:
      PyObject_HEAD
      Locale object;
      static PyObject *wrap_Object(const Locale&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
