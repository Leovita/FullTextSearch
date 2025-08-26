#ifndef org_apache_pylucene_analysis_PythonTokenStream_H
#define org_apache_pylucene_analysis_PythonTokenStream_H

#include "org/apache/lucene/analysis/TokenStream.h"

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
    namespace pylucene {
      namespace analysis {

        class PythonTokenStream : public ::org::apache::lucene::analysis::TokenStream {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_close_e7bdbe105ce1bafb,
            mid_end_e7bdbe105ce1bafb,
            mid_incrementToken_9aa4f33e82ea333f,
            mid_pythonExtension_0f176418e3e16541,
            mid_pythonExtension_1d3149fac12f2af3,
            mid_reset_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonTokenStream(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonTokenStream(const PythonTokenStream& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

          PythonTokenStream();

          void close() const;
          void end() const;
          jboolean incrementToken() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void reset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(PythonTokenStream);
        extern PyTypeObject *PY_TYPE(PythonTokenStream);

        class t_PythonTokenStream {
        public:
          PyObject_HEAD
          PythonTokenStream object;
          static PyObject *wrap_Object(const PythonTokenStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
