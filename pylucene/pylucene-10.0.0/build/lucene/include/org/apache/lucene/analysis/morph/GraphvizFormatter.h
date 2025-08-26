#ifndef org_apache_lucene_analysis_morph_GraphvizFormatter_H
#define org_apache_lucene_analysis_morph_GraphvizFormatter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {
          class Viterbi$Position;
          class GraphvizFormatter$DictionaryProvider;
          class ConnectionCosts;
          class Viterbi$WrappedPositionArray;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {

          class GraphvizFormatter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8476a9a051f2989d,
              mid_finish_e7df854526d67fa3,
              mid_onBacktrace_9039961e8dc969f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GraphvizFormatter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GraphvizFormatter(const GraphvizFormatter& obj) : ::java::lang::Object(obj) {}

            GraphvizFormatter(const ::org::apache::lucene::analysis::morph::ConnectionCosts &);

            ::java::lang::String finish() const;
            void onBacktrace(const ::org::apache::lucene::analysis::morph::GraphvizFormatter$DictionaryProvider &, const ::org::apache::lucene::analysis::morph::Viterbi$WrappedPositionArray &, jint, const ::org::apache::lucene::analysis::morph::Viterbi$Position &, jint, const JArray< jchar > &, jboolean) const;
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
        namespace morph {
          extern PyType_Def PY_TYPE_DEF(GraphvizFormatter);
          extern PyTypeObject *PY_TYPE(GraphvizFormatter);

          class t_GraphvizFormatter {
          public:
            PyObject_HEAD
            GraphvizFormatter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GraphvizFormatter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GraphvizFormatter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GraphvizFormatter&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
