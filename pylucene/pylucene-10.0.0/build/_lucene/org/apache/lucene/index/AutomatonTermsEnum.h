#ifndef org_apache_lucene_index_AutomatonTermsEnum_H
#define org_apache_lucene_index_AutomatonTermsEnum_H

#include "org/apache/lucene/index/FilteredTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum;
      }
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
        }
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
            mid_init$_0dfb591ff4ff1f7c,
            mid_nextSeekTerm_7ee20c47a981dd44,
            mid_accept_5259ad97f7ee0cbd,
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
