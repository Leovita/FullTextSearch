#ifndef org_apache_lucene_index_AutomatonTermsEnum_H
#define org_apache_lucene_index_AutomatonTermsEnum_H

#include "org/apache/lucene/index/FilteredTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
        }
      }
      namespace index {
        class TermsEnum;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class AutomatonTermsEnum : public ::org::apache::lucene::index::FilteredTermsEnum {
         public:
          enum {
            mid_init$_9e2dc8cfa2e0a8c4,
            mid_nextSeekTerm_2aeffe698cc65689,
            mid_accept_da290bd6151f1a3d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AutomatonTermsEnum(jobject obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AutomatonTermsEnum(const AutomatonTermsEnum& obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {}

          AutomatonTermsEnum(const ::org::apache::lucene::index::TermsEnum &, const ::org::apache::lucene::util::automaton::CompiledAutomaton &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(AutomatonTermsEnum);
        extern PyTypeObject *PY_TYPE(AutomatonTermsEnum);

        class t_AutomatonTermsEnum {
        public:
          PyObject_HEAD
          AutomatonTermsEnum object;
          static PyObject *wrap_Object(const AutomatonTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
