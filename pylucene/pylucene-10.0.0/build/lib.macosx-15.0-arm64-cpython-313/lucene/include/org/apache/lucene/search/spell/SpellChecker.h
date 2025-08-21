#ifndef org_apache_lucene_search_spell_SpellChecker_H
#define org_apache_lucene_search_spell_SpellChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class Dictionary;
          class SuggestMode;
          class SuggestWord;
          class StringDistance;
        }
      }
      namespace index {
        class IndexReader;
        class IndexWriterConfig;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Comparator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class SpellChecker : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3c151c130d7f3176,
              mid_init$_6bff77269c19952f,
              mid_init$_0115af500ef4c1c6,
              mid_clearIndex_3720c61b0679eb3e,
              mid_close_3720c61b0679eb3e,
              mid_exist_4a13a663b5c11133,
              mid_getAccuracy_9b6c3480dac00edf,
              mid_getComparator_39238840448c1807,
              mid_getStringDistance_478505d6ee0aee8d,
              mid_indexDictionary_4435f80ff99b3050,
              mid_setAccuracy_c771a95b0227fb6a,
              mid_setComparator_480edaf434ebe52f,
              mid_setSpellIndex_3c151c130d7f3176,
              mid_setStringDistance_c1f993af6d9506f9,
              mid_suggestSimilar_4d63ef154ee63a81,
              mid_suggestSimilar_ea382154efe983a3,
              mid_suggestSimilar_e4611c7a22b54a1b,
              mid_suggestSimilar_bee0c8b15b5c4cd6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpellChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpellChecker(const SpellChecker& obj) : ::java::lang::Object(obj) {}

            static jfloat DEFAULT_ACCURACY;
            static ::java::lang::String *F_WORD;

            SpellChecker(const ::org::apache::lucene::store::Directory &);
            SpellChecker(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::spell::StringDistance &);
            SpellChecker(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::spell::StringDistance &, const ::java::util::Comparator &);

            void clearIndex() const;
            void close() const;
            jboolean exist(const ::java::lang::String &) const;
            jfloat getAccuracy() const;
            ::java::util::Comparator getComparator() const;
            ::org::apache::lucene::search::spell::StringDistance getStringDistance() const;
            void indexDictionary(const ::org::apache::lucene::search::spell::Dictionary &, const ::org::apache::lucene::index::IndexWriterConfig &, jboolean) const;
            void setAccuracy(jfloat) const;
            void setComparator(const ::java::util::Comparator &) const;
            void setSpellIndex(const ::org::apache::lucene::store::Directory &) const;
            void setStringDistance(const ::org::apache::lucene::search::spell::StringDistance &) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint, jfloat) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::search::spell::SuggestMode &) const;
            JArray< ::java::lang::String > suggestSimilar(const ::java::lang::String &, jint, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::search::spell::SuggestMode &, jfloat) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          extern PyType_Def PY_TYPE_DEF(SpellChecker);
          extern PyTypeObject *PY_TYPE(SpellChecker);

          class t_SpellChecker {
          public:
            PyObject_HEAD
            SpellChecker object;
            static PyObject *wrap_Object(const SpellChecker&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
