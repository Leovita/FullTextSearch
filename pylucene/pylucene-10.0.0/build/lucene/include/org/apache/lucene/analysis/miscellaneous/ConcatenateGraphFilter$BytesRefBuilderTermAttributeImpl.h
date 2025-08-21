#ifndef org_apache_lucene_analysis_miscellaneous_ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl_H
#define org_apache_lucene_analysis_miscellaneous_ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {
          class ConcatenateGraphFilter$BytesRefBuilderTermAttribute;
        }
        namespace tokenattributes {
          class TermToBytesRefAttribute;
        }
      }
      namespace util {
        class BytesRef;
        class AttributeReflector;
        class BytesRefBuilder;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_builder_dc06164013e8378f,
              mid_clear_3720c61b0679eb3e,
              mid_clone_c9b39303c053ec9a,
              mid_copyTo_9be83c6b2aff7007,
              mid_getBytesRef_9740fddd1c7df148,
              mid_reflectWith_454217ab6e97f729,
              mid_toUTF16_373f0038978f926b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl(const ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl();

            ::org::apache::lucene::util::BytesRefBuilder builder() const;
            void clear() const;
            ::org::apache::lucene::util::AttributeImpl clone() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            ::org::apache::lucene::util::BytesRef getBytesRef() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            ::java::lang::CharSequence toUTF16() const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl);
          extern PyTypeObject *PY_TYPE(ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl);

          class t_ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl {
          public:
            PyObject_HEAD
            ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl object;
            static PyObject *wrap_Object(const ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl&);
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
