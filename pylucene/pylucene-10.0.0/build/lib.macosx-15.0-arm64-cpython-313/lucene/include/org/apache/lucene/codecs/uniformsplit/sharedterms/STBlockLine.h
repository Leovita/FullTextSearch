#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockLine_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockLine_H

#include "org/apache/lucene/codecs/uniformsplit/BlockLine.h"

namespace java {
  namespace util {
    class Collection;
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class TermBytes;
          class FieldMetadata;
          namespace sharedterms {
            class FieldMetadataTermState;
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
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class STBlockLine : public ::org::apache::lucene::codecs::uniformsplit::BlockLine {
             public:
              enum {
                mid_init$_e24aea4cd46df0b6,
                mid_collectFields_40eba2cff967cc45,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STBlockLine(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::BlockLine(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STBlockLine(const STBlockLine& obj) : ::org::apache::lucene::codecs::uniformsplit::BlockLine(obj) {}

              STBlockLine(const ::org::apache::lucene::codecs::uniformsplit::TermBytes &, const ::java::util::List &);

              void collectFields(const ::java::util::Collection &) const;
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
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {
            extern PyType_Def PY_TYPE_DEF(STBlockLine);
            extern PyTypeObject *PY_TYPE(STBlockLine);

            class t_STBlockLine {
            public:
              PyObject_HEAD
              STBlockLine object;
              static PyObject *wrap_Object(const STBlockLine&);
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
