#ifndef org_apache_lucene_analysis_synonym_word2vec_Dl4jModelReader_H
#define org_apache_lucene_analysis_synonym_word2vec_Dl4jModelReader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {
          namespace word2vec {
            class Word2VecModel;
          }
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
        namespace synonym {
          namespace word2vec {

            class Dl4jModelReader : public ::java::lang::Object {
             public:
              enum {
                mid_init$_37e23ef4361d4c28,
                mid_close_3720c61b0679eb3e,
                mid_read_49612d1a82445b67,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Dl4jModelReader(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Dl4jModelReader(const Dl4jModelReader& obj) : ::java::lang::Object(obj) {}

              Dl4jModelReader(const ::java::io::InputStream &);

              void close() const;
              ::org::apache::lucene::analysis::synonym::word2vec::Word2VecModel read() const;
            };
          }
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
        namespace synonym {
          namespace word2vec {
            extern PyType_Def PY_TYPE_DEF(Dl4jModelReader);
            extern PyTypeObject *PY_TYPE(Dl4jModelReader);

            class t_Dl4jModelReader {
            public:
              PyObject_HEAD
              Dl4jModelReader object;
              static PyObject *wrap_Object(const Dl4jModelReader&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
