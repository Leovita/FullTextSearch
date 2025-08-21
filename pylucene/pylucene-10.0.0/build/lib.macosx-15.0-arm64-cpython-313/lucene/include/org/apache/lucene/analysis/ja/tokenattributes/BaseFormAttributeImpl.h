#ifndef org_apache_lucene_analysis_ja_tokenattributes_BaseFormAttributeImpl_H
#define org_apache_lucene_analysis_ja_tokenattributes_BaseFormAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          class Token;
          namespace tokenattributes {
            class BaseFormAttribute;
          }
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
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace tokenattributes {

            class BaseFormAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
             public:
              enum {
                mid_init$_3720c61b0679eb3e,
                mid_clear_3720c61b0679eb3e,
                mid_copyTo_9be83c6b2aff7007,
                mid_getBaseForm_09a7afff1868fc5e,
                mid_reflectWith_454217ab6e97f729,
                mid_setToken_1fe887e577328fdb,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BaseFormAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BaseFormAttributeImpl(const BaseFormAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

              BaseFormAttributeImpl();

              void clear() const;
              void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
              ::java::lang::String getBaseForm() const;
              void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
              void setToken(const ::org::apache::lucene::analysis::ja::Token &) const;
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
        namespace ja {
          namespace tokenattributes {
            extern PyType_Def PY_TYPE_DEF(BaseFormAttributeImpl);
            extern PyTypeObject *PY_TYPE(BaseFormAttributeImpl);

            class t_BaseFormAttributeImpl {
            public:
              PyObject_HEAD
              BaseFormAttributeImpl object;
              static PyObject *wrap_Object(const BaseFormAttributeImpl&);
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
