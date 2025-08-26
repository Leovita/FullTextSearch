#ifndef org_apache_lucene_analysis_ko_dict_TokenInfoDictionary_H
#define org_apache_lucene_analysis_ko_dict_TokenInfoDictionary_H

#include "org/apache/lucene/analysis/morph/BinaryDictionary.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
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
                mid_init$_b5d3a37b25c6d7fc,
                mid_getFST_8b8ed7bf7601ac1c,
                mid_getInstance_2b74a127ccd58a47,
                mid_getMorphAttributes_eda9302ed29db3a7,
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
