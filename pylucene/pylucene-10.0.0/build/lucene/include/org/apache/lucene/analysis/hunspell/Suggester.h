#ifndef org_apache_lucene_analysis_hunspell_Suggester_H
#define org_apache_lucene_analysis_hunspell_Suggester_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class Suggester;
          class FragmentChecker;
          class Dictionary;
          class SuggestionTimeoutException;
        }
      }
    }
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
              mid_init$_081d976eaef7e2bb,
              mid_proceedPastRep_ef0a04995077523c,
              mid_suggestNoTimeout_5d97058074f9c965,
              mid_suggestWithTimeout_82eb3cc11d917cf7,
              mid_withFragmentChecker_4a319c966268ce68,
              mid_withSuggestibleEntryCache_ef0a04995077523c,
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
