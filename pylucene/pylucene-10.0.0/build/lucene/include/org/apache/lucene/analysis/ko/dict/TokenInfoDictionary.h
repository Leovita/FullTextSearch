#ifndef org_apache_lucene_analysis_ko_dict_TokenInfoDictionary_H
#define org_apache_lucene_analysis_ko_dict_TokenInfoDictionary_H

#include "org/apache/lucene/analysis/morph/BinaryDictionary.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class TokenInfoDictionary;
            class TokenInfoFST;
            class TokenInfoMorphData;
          }
        }
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
    class String;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {

            class TokenInfoDictionary : public ::org::apache::lucene::analysis::morph::BinaryDictionary {
             public:
              enum {
                mid_init$_926988d72e858c1a,
                mid_getFST_446b49327b460db0,
                mid_getInstance_faaf1cbba29fbddf,
                mid_getMorphAttributes_9bc5c1e5cb0b5a77,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TokenInfoDictionary(jobject obj) : ::org::apache::lucene::analysis::morph::BinaryDictionary(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TokenInfoDictionary(const TokenInfoDictionary& obj) : ::org::apache::lucene::analysis::morph::BinaryDictionary(obj) {}

              static ::java::lang::String *FST_FILENAME_SUFFIX;

              TokenInfoDictionary(const ::java::nio::file::Path &, const ::java::nio::file::Path &, const ::java::nio::file::Path &, const ::java::nio::file::Path &);

              ::org::apache::lucene::analysis::ko::dict::TokenInfoFST getFST() const;
              static TokenInfoDictionary getInstance();
              ::org::apache::lucene::analysis::ko::dict::TokenInfoMorphData getMorphAttributes() const;
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
        namespace ko {
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(TokenInfoDictionary);
            extern PyTypeObject *PY_TYPE(TokenInfoDictionary);

            class t_TokenInfoDictionary {
            public:
              PyObject_HEAD
              TokenInfoDictionary object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_TokenInfoDictionary *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TokenInfoDictionary&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TokenInfoDictionary&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
