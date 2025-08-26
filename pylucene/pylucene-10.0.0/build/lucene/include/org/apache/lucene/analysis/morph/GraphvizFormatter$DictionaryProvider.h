#ifndef org_apache_lucene_analysis_morph_GraphvizFormatter$DictionaryProvider_H
#define org_apache_lucene_analysis_morph_GraphvizFormatter$DictionaryProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {
          class Dictionary;
          class MorphData;
          class TokenType;
        }
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
        namespace morph {

          class GraphvizFormatter$DictionaryProvider : public ::java::lang::Object {
           public:
            enum {
              mid_get_42ae417d65a1505b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GraphvizFormatter$DictionaryProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GraphvizFormatter$DictionaryProvider(const GraphvizFormatter$DictionaryProvider& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::analysis::morph::Dictionary get(const ::org::apache::lucene::analysis::morph::TokenType &) const;
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
          extern PyType_Def PY_TYPE_DEF(GraphvizFormatter$DictionaryProvider);
          extern PyTypeObject *PY_TYPE(GraphvizFormatter$DictionaryProvider);

          class t_GraphvizFormatter$DictionaryProvider {
          public:
            PyObject_HEAD
            GraphvizFormatter$DictionaryProvider object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GraphvizFormatter$DictionaryProvider *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GraphvizFormatter$DictionaryProvider&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GraphvizFormatter$DictionaryProvider&, PyTypeObject *);
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
