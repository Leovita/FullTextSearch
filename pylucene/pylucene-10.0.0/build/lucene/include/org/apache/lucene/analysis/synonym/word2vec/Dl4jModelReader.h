#ifndef org_apache_lucene_analysis_synonym_word2vec_Dl4jModelReader_H
#define org_apache_lucene_analysis_synonym_word2vec_Dl4jModelReader_H

#include "java/lang/Object.h"

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
namespace java {
  namespace io {
    class Closeable;
    class IOException;
    class InputStream;
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
        namespace synonym {
          namespace word2vec {

            class Dl4jModelReader : public ::java::lang::Object {
             public:
              enum {
                mid_init$_da97eaa7d893a93a,
                mid_close_e7bdbe105ce1bafb,
                mid_read_fa879f6e4066ded6,
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
