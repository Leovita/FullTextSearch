#ifndef org_apache_lucene_analysis_tokenattributes_CharTermAttribute_H
#define org_apache_lucene_analysis_tokenattributes_CharTermAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace java {
  namespace lang {
    class Appendable;
    class Class;
    class CharSequence;
    class String;
    class StringBuilder;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class CharTermAttribute;
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

          class CharTermAttribute : public ::org::apache::lucene::util::Attribute {
           public:
            enum {
              mid_append_93c3e51ee367b727,
              mid_append_6ded55a46c89e9ea,
              mid_append_8fd290207a88902a,
              mid_append_fdef7fd064209339,
              mid_append_107fc9eadd9a04d0,
              mid_append_c0e9d633af448f1d,
              mid_buffer_77d52ded526199de,
              mid_copyBuffer_fc9be2ded8ee801f,
              mid_resizeBuffer_b99eaae8e7f3ab85,
              mid_setEmpty_6c99065d62f8e710,
              mid_setLength_4565eb3469a6f0b6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharTermAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharTermAttribute(const CharTermAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

            CharTermAttribute append(const ::java::lang::StringBuilder &) const;
            CharTermAttribute append(const ::java::lang::String &) const;
            CharTermAttribute append(jchar) const;
            CharTermAttribute append(const ::java::lang::CharSequence &) const;
            CharTermAttribute append(const CharTermAttribute &) const;
            CharTermAttribute append(const ::java::lang::CharSequence &, jint, jint) const;
            JArray< jchar > buffer() const;
            void copyBuffer(const JArray< jchar > &, jint, jint) const;
            JArray< jchar > resizeBuffer(jint) const;
            CharTermAttribute setEmpty() const;
            CharTermAttribute setLength(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(CharTermAttribute);
          extern PyTypeObject *PY_TYPE(CharTermAttribute);

          class t_CharTermAttribute {
          public:
            PyObject_HEAD
            CharTermAttribute object;
            static PyObject *wrap_Object(const CharTermAttribute&);
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
