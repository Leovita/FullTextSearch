#ifndef org_apache_lucene_analysis_miscellaneous_ConcatenateGraphFilter$BytesRefBuilderTermAttribute_H
#define org_apache_lucene_analysis_miscellaneous_ConcatenateGraphFilter$BytesRefBuilderTermAttribute_H

#include "org/apache/lucene/analysis/tokenattributes/TermToBytesRefAttribute.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefBuilder;
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class ConcatenateGraphFilter$BytesRefBuilderTermAttribute : public ::org::apache::lucene::analysis::tokenattributes::TermToBytesRefAttribute {
           public:
            enum {
              mid_builder_af123c7728e8b455,
              mid_toUTF16_f2e5418fe0d66c69,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConcatenateGraphFilter$BytesRefBuilderTermAttribute(jobject obj) : ::org::apache::lucene::analysis::tokenattributes::TermToBytesRefAttribute(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConcatenateGraphFilter$BytesRefBuilderTermAttribute(const ConcatenateGraphFilter$BytesRefBuilderTermAttribute& obj) : ::org::apache::lucene::analysis::tokenattributes::TermToBytesRefAttribute(obj) {}

            ::org::apache::lucene::util::BytesRefBuilder builder() const;
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
          extern PyType_Def PY_TYPE_DEF(ConcatenateGraphFilter$BytesRefBuilderTermAttribute);
          extern PyTypeObject *PY_TYPE(ConcatenateGraphFilter$BytesRefBuilderTermAttribute);

          class t_ConcatenateGraphFilter$BytesRefBuilderTermAttribute {
          public:
            PyObject_HEAD
            ConcatenateGraphFilter$BytesRefBuilderTermAttribute object;
            static PyObject *wrap_Object(const ConcatenateGraphFilter$BytesRefBuilderTermAttribute&);
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
