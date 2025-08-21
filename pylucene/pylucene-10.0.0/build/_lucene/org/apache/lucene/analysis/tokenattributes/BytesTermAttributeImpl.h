#ifndef org_apache_lucene_analysis_tokenattributes_BytesTermAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_BytesTermAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class AttributeReflector;
      }
      namespace analysis {
        namespace tokenattributes {
          class TermToBytesRefAttribute;
          class BytesTermAttribute;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class BytesTermAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_clear_3720c61b0679eb3e,
              mid_clone_c9b39303c053ec9a,
              mid_copyTo_9be83c6b2aff7007,
              mid_equals_570b5248a6da3ef6,
              mid_getBytesRef_9740fddd1c7df148,
              mid_hashCode_20fbf7565993c3d7,
              mid_reflectWith_454217ab6e97f729,
              mid_setBytesRef_ac0de3ee0e03786d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BytesTermAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BytesTermAttributeImpl(const BytesTermAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            BytesTermAttributeImpl();

            void clear() const;
            ::org::apache::lucene::util::AttributeImpl clone() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BytesRef getBytesRef() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setBytesRef(const ::org::apache::lucene::util::BytesRef &) const;
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
        namespace tokenattributes {
          extern PyType_Def PY_TYPE_DEF(BytesTermAttributeImpl);
          extern PyTypeObject *PY_TYPE(BytesTermAttributeImpl);

          class t_BytesTermAttributeImpl {
          public:
            PyObject_HEAD
            BytesTermAttributeImpl object;
            static PyObject *wrap_Object(const BytesTermAttributeImpl&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
