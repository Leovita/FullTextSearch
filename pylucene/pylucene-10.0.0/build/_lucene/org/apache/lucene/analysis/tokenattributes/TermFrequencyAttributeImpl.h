#ifndef org_apache_lucene_analysis_tokenattributes_TermFrequencyAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_TermFrequencyAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeReflector;
      }
      namespace analysis {
        namespace tokenattributes {
          class TermFrequencyAttribute;
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
        namespace tokenattributes {

          class TermFrequencyAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_clear_3720c61b0679eb3e,
              mid_copyTo_9be83c6b2aff7007,
              mid_end_3720c61b0679eb3e,
              mid_equals_570b5248a6da3ef6,
              mid_getTermFrequency_20fbf7565993c3d7,
              mid_hashCode_20fbf7565993c3d7,
              mid_reflectWith_454217ab6e97f729,
              mid_setTermFrequency_540b2b23d51b1efd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermFrequencyAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermFrequencyAttributeImpl(const TermFrequencyAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            TermFrequencyAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            void end() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getTermFrequency() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setTermFrequency(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(TermFrequencyAttributeImpl);
          extern PyTypeObject *PY_TYPE(TermFrequencyAttributeImpl);

          class t_TermFrequencyAttributeImpl {
          public:
            PyObject_HEAD
            TermFrequencyAttributeImpl object;
            static PyObject *wrap_Object(const TermFrequencyAttributeImpl&);
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
