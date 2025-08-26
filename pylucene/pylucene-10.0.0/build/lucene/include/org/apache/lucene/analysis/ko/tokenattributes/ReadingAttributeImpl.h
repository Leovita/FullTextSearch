#ifndef org_apache_lucene_analysis_ko_tokenattributes_ReadingAttributeImpl_H
#define org_apache_lucene_analysis_ko_tokenattributes_ReadingAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          class Token;
          namespace tokenattributes {
            class ReadingAttribute;
          }
        }
      }
      namespace util {
        class AttributeReflector;
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
          namespace tokenattributes {

            class ReadingAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_clear_e7bdbe105ce1bafb,
                mid_copyTo_b194e41b568bc1bc,
                mid_getReading_e7df854526d67fa3,
                mid_reflectWith_ac049850cfa29e37,
                mid_setToken_3352cfaa0db5996d,
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
