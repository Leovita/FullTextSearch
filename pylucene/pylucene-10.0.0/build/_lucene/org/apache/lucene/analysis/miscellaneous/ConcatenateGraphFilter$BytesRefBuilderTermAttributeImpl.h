#ifndef org_apache_lucene_analysis_miscellaneous_ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl_H
#define org_apache_lucene_analysis_miscellaneous_ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class BytesRefBuilder;
        class AttributeReflector;
      }
      namespace analysis {
        namespace tokenattributes {
          class TermToBytesRefAttribute;
        }
        namespace miscellaneous {
          class ConcatenateGraphFilter$BytesRefBuilderTermAttribute;
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
        namespace miscellaneous {

          class ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_builder_af123c7728e8b455,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_2f6651241a7e46cf,
              mid_copyTo_b194e41b568bc1bc,
              mid_getBytesRef_adbedbc1fa61c358,
              mid_reflectWith_ac049850cfa29e37,
              mid_toUTF16_f2e5418fe0d66c69,
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
