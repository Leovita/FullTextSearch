#ifndef org_apache_lucene_analysis_TokenStreamToAutomaton_H
#define org_apache_lucene_analysis_TokenStreamToAutomaton_H

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
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class TokenStreamToAutomaton : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_setFinalOffsetGapAsHole_b110fc3a58c081ab,
            mid_setPreservePositionIncrements_b110fc3a58c081ab,
            mid_setUnicodeArcs_b110fc3a58c081ab,
            mid_toAutomaton_0701c7d47980a366,
            mid_changeToken_7ee20c47a981dd44,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TokenStreamToAutomaton(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TokenStreamToAutomaton(const TokenStreamToAutomaton& obj) : ::java::lang::Object(obj) {}

          static jint HOLE;
          static jint POS_SEP;

          TokenStreamToAutomaton();

          void setFinalOffsetGapAsHole(jboolean) const;
          void setPreservePositionIncrements(jboolean) const;
          void setUnicodeArcs(jboolean) const;
          ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        extern PyType_Def PY_TYPE_DEF(TokenStreamToAutomaton);
        extern PyTypeObject *PY_TYPE(TokenStreamToAutomaton);

        class t_TokenStreamToAutomaton {
        public:
          PyObject_HEAD
          TokenStreamToAutomaton object;
          static PyObject *wrap_Object(const TokenStreamToAutomaton&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
