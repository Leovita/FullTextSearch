#ifndef org_apache_lucene_analysis_hunspell_Suggester_H
#define org_apache_lucene_analysis_hunspell_Suggester_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class Dictionary;
          class FragmentChecker;
          class SuggestionTimeoutException;
          class Suggester;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Runnable;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class Suggester : public ::java::lang::Object {
           public:
            enum {
              mid_init$_25851638115dd159,
              mid_proceedPastRep_8805778296c3ebbc,
              mid_suggestNoTimeout_2a97fb83df696e60,
              mid_suggestWithTimeout_c1e6c632eb82c7e5,
              mid_withFragmentChecker_97da237e590a51ab,
              mid_withSuggestibleEntryCache_8805778296c3ebbc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Suggester(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Suggester(const Suggester& obj) : ::java::lang::Object(obj) {}

            Suggester(const ::org::apache::lucene::analysis::hunspell::Dictionary &);

            Suggester proceedPastRep() const;
            ::java::util::List suggestNoTimeout(const ::java::lang::String &, const ::java::lang::Runnable &) const;
            ::java::util::List suggestWithTimeout(const ::java::lang::String &, jlong, const ::java::lang::Runnable &) const;
            Suggester withFragmentChecker(const ::org::apache::lucene::analysis::hunspell::FragmentChecker &) const;
            Suggester withSuggestibleEntryCache() const;
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
      namespace analysis {
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(Suggester);
          extern PyTypeObject *PY_TYPE(Suggester);

          class t_Suggester {
          public:
            PyObject_HEAD
            Suggester object;
            static PyObject *wrap_Object(const Suggester&);
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
