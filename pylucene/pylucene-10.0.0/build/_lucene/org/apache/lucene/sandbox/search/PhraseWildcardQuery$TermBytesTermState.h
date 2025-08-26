#ifndef org_apache_lucene_sandbox_search_PhraseWildcardQuery$TermBytesTermState_H
#define org_apache_lucene_sandbox_search_PhraseWildcardQuery$TermBytesTermState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class TermState;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class PhraseWildcardQuery$TermBytesTermState : public ::java::lang::Object {
           public:
            enum {
              mid_init$_68ebcc8117fd12a5,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhraseWildcardQuery$TermBytesTermState(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhraseWildcardQuery$TermBytesTermState(const PhraseWildcardQuery$TermBytesTermState& obj) : ::java::lang::Object(obj) {}

            PhraseWildcardQuery$TermBytesTermState(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &);

            ::java::lang::String toString() const;
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
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(PhraseWildcardQuery$TermBytesTermState);
          extern PyTypeObject *PY_TYPE(PhraseWildcardQuery$TermBytesTermState);

          class t_PhraseWildcardQuery$TermBytesTermState {
          public:
            PyObject_HEAD
            PhraseWildcardQuery$TermBytesTermState object;
            static PyObject *wrap_Object(const PhraseWildcardQuery$TermBytesTermState&);
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
