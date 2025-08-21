#ifndef org_apache_lucene_analysis_AutomatonToTokenStream_H
#define org_apache_lucene_analysis_AutomatonToTokenStream_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
        }
      }
      namespace analysis {
        class TokenStream;
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
      namespace analysis {

        class AutomatonToTokenStream : public ::java::lang::Object {
         public:
          enum {
            mid_toTokenStream_de206e35ce1fba9d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AutomatonToTokenStream(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AutomatonToTokenStream(const AutomatonToTokenStream& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::analysis::TokenStream toTokenStream(const ::org::apache::lucene::util::automaton::Automaton &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(AutomatonToTokenStream);
        extern PyTypeObject *PY_TYPE(AutomatonToTokenStream);

        class t_AutomatonToTokenStream {
        public:
          PyObject_HEAD
          AutomatonToTokenStream object;
          static PyObject *wrap_Object(const AutomatonToTokenStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
