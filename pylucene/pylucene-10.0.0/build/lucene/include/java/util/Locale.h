#ifndef java_util_Locale_H
#define java_util_Locale_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class String;
    class Class;
    class Character;
  }
  namespace util {
    class Locale$IsoCountryCode;
    class Collection;
    class Locale$LanguageRange;
    class Set;
    class Locale$Category;
    class List;
    class MissingResourceException;
    class Locale$FilteringMode;
    class Locale;
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
        mid_init$_ee46a189998009d6,
        mid_init$_0dd012a11c3f389b,
        mid_init$_f29246d136b6952d,
        mid_caseFoldLanguageTag_fef9c036acf290a9,
        mid_clone_4819806f62f1360a,
        mid_equals_00d17418847797d4,
        mid_filter_f36c0c7620f293c0,
        mid_filter_58e61f2cde10e15a,
        mid_filterTags_f36c0c7620f293c0,
        mid_filterTags_58e61f2cde10e15a,
        mid_forLanguageTag_95760feb91a95c5e,
        mid_getAvailableLocales_0daa090ed7228b3c,
        mid_getCountry_e7df854526d67fa3,
        mid_getDefault_d50f7bd45bffb467,
        mid_getDefault_2fe641e255db30a7,
        mid_getDisplayCountry_e7df854526d67fa3,
        mid_getDisplayCountry_dce821ed97c0e930,
        mid_getDisplayLanguage_e7df854526d67fa3,
        mid_getDisplayLanguage_dce821ed97c0e930,
        mid_getDisplayName_e7df854526d67fa3,
        mid_getDisplayName_dce821ed97c0e930,
        mid_getDisplayScript_e7df854526d67fa3,
        mid_getDisplayScript_dce821ed97c0e930,
        mid_getDisplayVariant_e7df854526d67fa3,
        mid_getDisplayVariant_dce821ed97c0e930,
        mid_getExtension_6923855d95beafa0,
        mid_getExtensionKeys_79131c6bbcf08916,
        mid_getISO3Country_e7df854526d67fa3,
        mid_getISO3Language_e7df854526d67fa3,
        mid_getISOCountries_970db9a2a49d840f,
        mid_getISOCountries_ef7bb87cd5f2b7be,
        mid_getISOLanguages_970db9a2a49d840f,
        mid_getLanguage_e7df854526d67fa3,
        mid_getScript_e7df854526d67fa3,
        mid_getUnicodeLocaleAttributes_79131c6bbcf08916,
        mid_getUnicodeLocaleKeys_79131c6bbcf08916,
        mid_getUnicodeLocaleType_fef9c036acf290a9,
        mid_getVariant_e7df854526d67fa3,
        mid_hasExtensions_9aa4f33e82ea333f,
        mid_hashCode_bd89ce15dad49192,
        mid_lookup_4f0e830763a74808,
        mid_lookupTag_80e41a560d39fda6,
        mid_of_95760feb91a95c5e,
        mid_of_62bb6627cac54a5e,
        mid_of_0f1f72c86e9cc422,
        mid_setDefault_160efbb0dee8e527,
        mid_setDefault_9188bdc9b83e08a9,
        mid_stripExtensions_d50f7bd45bffb467,
        mid_toLanguageTag_e7df854526d67fa3,
        mid_toString_e7df854526d67fa3,
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
