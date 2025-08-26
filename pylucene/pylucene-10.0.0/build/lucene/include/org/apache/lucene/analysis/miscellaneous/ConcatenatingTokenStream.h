#ifndef org_apache_lucene_analysis_miscellaneous_ConcatenatingTokenStream_H
#define org_apache_lucene_analysis_miscellaneous_ConcatenatingTokenStream_H

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
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class ConcatenatingTokenStream : public ::org::apache::lucene::analysis::TokenStream {
           public:
            enum {
              mid_init$_3bd328fe6d6d8f2c,
              mid_close_e7bdbe105ce1bafb,
              mid_end_e7bdbe105ce1bafb,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConcatenatingTokenStream(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConcatenatingTokenStream(const ConcatenatingTokenStream& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

            ConcatenatingTokenStream(const JArray< ::org::apache::lucene::analysis::TokenStream > &);

            void close() const;
            void end() const;
            jboolean incrementToken() const;
            void reset() const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(ConcatenatingTokenStream);
          extern PyTypeObject *PY_TYPE(ConcatenatingTokenStream);

          class t_ConcatenatingTokenStream {
          public:
            PyObject_HEAD
            ConcatenatingTokenStream object;
            static PyObject *wrap_Object(const ConcatenatingTokenStream&);
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
