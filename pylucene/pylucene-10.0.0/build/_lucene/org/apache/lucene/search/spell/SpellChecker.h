#ifndef org_apache_lucene_search_spell_SpellChecker_H
#define org_apache_lucene_search_spell_SpellChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class IndexReader;
        class IndexWriterConfig;
      }
      namespace search {
        namespace spell {
          class SuggestMode;
          class Dictionary;
          class StringDistance;
          class SuggestWord;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class Closeable;
    class IOException;
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
              mid_init$_0bf39a7351552ef4,
              mid_init$_e7de300db758bc54,
              mid_init$_abbfae6b0d3c926a,
              mid_clearIndex_e7bdbe105ce1bafb,
              mid_close_e7bdbe105ce1bafb,
              mid_exist_94f7e759d94961b0,
              mid_getAccuracy_8b62236f0e4d0dbc,
              mid_getComparator_5cc89c689cd941fe,
              mid_getStringDistance_21d3be2e55fe7f08,
              mid_indexDictionary_e777b0d9d33ebc81,
              mid_setAccuracy_675f4cb9a2529ee0,
              mid_setComparator_236c903ae32a3610,
              mid_setSpellIndex_0bf39a7351552ef4,
              mid_setStringDistance_79704ae345a0bc97,
              mid_suggestSimilar_9ecbefcf978f48ac,
              mid_suggestSimilar_96bdf97568941cf4,
              mid_suggestSimilar_ac974a73314f7239,
              mid_suggestSimilar_8efd403320b108ae,
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
