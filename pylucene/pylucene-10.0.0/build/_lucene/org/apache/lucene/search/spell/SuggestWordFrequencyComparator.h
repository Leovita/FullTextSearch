#ifndef org_apache_lucene_search_spell_SuggestWordFrequencyComparator_H
#define org_apache_lucene_search_spell_SuggestWordFrequencyComparator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class SuggestWord;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class SuggestWordFrequencyComparator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_compare_9ab6d6677858c9d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SuggestWordFrequencyComparator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SuggestWordFrequencyComparator(const SuggestWordFrequencyComparator& obj) : ::java::lang::Object(obj) {}

            SuggestWordFrequencyComparator();

            jint compare(const ::org::apache::lucene::search::spell::SuggestWord &, const ::org::apache::lucene::search::spell::SuggestWord &) const;
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
          extern PyType_Def PY_TYPE_DEF(SuggestWordFrequencyComparator);
          extern PyTypeObject *PY_TYPE(SuggestWordFrequencyComparator);

          class t_SuggestWordFrequencyComparator {
          public:
            PyObject_HEAD
            SuggestWordFrequencyComparator object;
            static PyObject *wrap_Object(const SuggestWordFrequencyComparator&);
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
