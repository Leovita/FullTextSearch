#ifndef org_apache_lucene_search_spell_SuggestWordFrequencyComparator_H
#define org_apache_lucene_search_spell_SuggestWordFrequencyComparator_H

#include "java/lang/Object.h"

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
namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_compare_96d702cb67e73cec,
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
