#ifndef org_apache_lucene_analysis_Tokenizer_H
#define org_apache_lucene_analysis_Tokenizer_H

#include "org/apache/lucene/analysis/TokenStream.h"

namespace java {
  namespace io {
    class Reader;
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

        class Tokenizer : public ::org::apache::lucene::analysis::TokenStream {
         public:
          enum {
            mid_close_e7bdbe105ce1bafb,
            mid_reset_e7bdbe105ce1bafb,
            mid_setReader_89ab2bee9aa84b00,
            mid_correctOffset_a3904e10f5bb9437,
            mid_setReaderTestPoint_e7bdbe105ce1bafb,
            max_mid
          };

          enum {
            fid_input,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Tokenizer(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Tokenizer(const Tokenizer& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

          ::java::io::Reader _get_input() const;
          void _set_input(const ::java::io::Reader &) const;

          void close() const;
          void reset() const;
          void setReader(const ::java::io::Reader &) const;
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
        extern PyType_Def PY_TYPE_DEF(Tokenizer);
        extern PyTypeObject *PY_TYPE(Tokenizer);

        class t_Tokenizer {
        public:
          PyObject_HEAD
          Tokenizer object;
          static PyObject *wrap_Object(const Tokenizer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
