#ifndef org_apache_lucene_analysis_tokenattributes_CharTermAttribute_H
#define org_apache_lucene_analysis_tokenattributes_CharTermAttribute_H

#include "org/apache/lucene/util/Attribute.h"

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
namespace java {
  namespace lang {
    class Appendable;
    class Class;
    class StringBuilder;
    class String;
    class CharSequence;
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
              mid_append_9b92f6e313a4d773,
              mid_append_016de536220d6cf7,
              mid_append_bf52ddc416077be8,
              mid_append_f1020fd319425e9f,
              mid_append_5222518cf8139859,
              mid_append_9b607feb724e19ec,
              mid_buffer_e5926045e1917c62,
              mid_copyBuffer_186bb5d1c1aec30c,
              mid_resizeBuffer_25bf44068950f64b,
              mid_setEmpty_fd305bd0e2b05b3a,
              mid_setLength_5e7ff32332c44cee,
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
