#ifndef org_apache_lucene_analysis_tokenattributes_SentenceAttribute_H
#define org_apache_lucene_analysis_tokenattributes_SentenceAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class SentenceAttribute : public ::org::apache::lucene::util::Attribute {
           public:
            enum {
              mid_getSentenceIndex_20fbf7565993c3d7,
              mid_setSentenceIndex_540b2b23d51b1efd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SentenceAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SentenceAttribute(const SentenceAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

            jint getSentenceIndex() const;
            void setSentenceIndex(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(SentenceAttribute);
          extern PyTypeObject *PY_TYPE(SentenceAttribute);

          class t_SentenceAttribute {
          public:
            PyObject_HEAD
            SentenceAttribute object;
            static PyObject *wrap_Object(const SentenceAttribute&);
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
