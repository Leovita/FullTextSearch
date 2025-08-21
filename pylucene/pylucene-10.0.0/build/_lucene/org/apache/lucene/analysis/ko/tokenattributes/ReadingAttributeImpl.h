#ifndef org_apache_lucene_analysis_ko_tokenattributes_ReadingAttributeImpl_H
#define org_apache_lucene_analysis_ko_tokenattributes_ReadingAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace tokenattributes {
            class ReadingAttribute;
          }
          class Token;
        }
      }
      namespace util {
        class AttributeReflector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace tokenattributes {

            class ReadingAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
             public:
              enum {
                mid_init$_3720c61b0679eb3e,
                mid_clear_3720c61b0679eb3e,
                mid_copyTo_9be83c6b2aff7007,
                mid_getReading_09a7afff1868fc5e,
                mid_reflectWith_454217ab6e97f729,
                mid_setToken_cff4f6c452786eb5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ReadingAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ReadingAttributeImpl(const ReadingAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

              ReadingAttributeImpl();

              void clear() const;
              void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
              ::java::lang::String getReading() const;
              void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
              void setToken(const ::org::apache::lucene::analysis::ko::Token &) const;
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
          namespace tokenattributes {
            extern PyType_Def PY_TYPE_DEF(ReadingAttributeImpl);
            extern PyTypeObject *PY_TYPE(ReadingAttributeImpl);

            class t_ReadingAttributeImpl {
            public:
              PyObject_HEAD
              ReadingAttributeImpl object;
              static PyObject *wrap_Object(const ReadingAttributeImpl&);
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
