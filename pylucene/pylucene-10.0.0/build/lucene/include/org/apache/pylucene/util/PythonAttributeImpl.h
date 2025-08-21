#ifndef org_apache_pylucene_util_PythonAttributeImpl_H
#define org_apache_pylucene_util_PythonAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeReflector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_clear_3720c61b0679eb3e,
            mid_copyTo_9be83c6b2aff7007,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_pythonExtension_16939d9d0a9a9721,
            mid_pythonExtension_8b3d46852b435a94,
            mid_reflectWith_454217ab6e97f729,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAttributeImpl(const PythonAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

          PythonAttributeImpl();

          void clear() const;
          void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(PythonAttributeImpl);
        extern PyTypeObject *PY_TYPE(PythonAttributeImpl);

        class t_PythonAttributeImpl {
        public:
          PyObject_HEAD
          PythonAttributeImpl object;
          static PyObject *wrap_Object(const PythonAttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
