#ifndef org_apache_lucene_queryparser_flexible_core_util_UnescapedCharSequence_H
#define org_apache_lucene_queryparser_flexible_core_util_UnescapedCharSequence_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class String;
    class Class;
  }
  namespace util {
    class Locale;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace util {

              class UnescapedCharSequence : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_5ed8eb2e3024c663,
                  mid_init$_f1e319c606cef0b3,
                  mid_charAt_92a13ce4196a7e69,
                  mid_length_20fbf7565993c3d7,
                  mid_subSequence_3202de35bfd622a0,
                  mid_toLowerCase_5de7dc0b79690ca9,
                  mid_toString_09a7afff1868fc5e,
                  mid_toStringEscaped_09a7afff1868fc5e,
                  mid_toStringEscaped_27d93aaabc4fd510,
                  mid_wasEscaped_ae22d3a856ad56f1,
                  mid_wasEscaped_6dd3d6e03c4a7594,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit UnescapedCharSequence(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                UnescapedCharSequence(const UnescapedCharSequence& obj) : ::java::lang::Object(obj) {}

                UnescapedCharSequence(const ::java::lang::CharSequence &);
                UnescapedCharSequence(const JArray< jchar > &, const JArray< jboolean > &, jint, jint);

                jchar charAt(jint) const;
                jint length() const;
                ::java::lang::CharSequence subSequence(jint, jint) const;
                static ::java::lang::CharSequence toLowerCase(const ::java::lang::CharSequence &, const ::java::util::Locale &);
                ::java::lang::String toString() const;
                ::java::lang::String toStringEscaped() const;
                ::java::lang::String toStringEscaped(const JArray< jchar > &) const;
                jboolean wasEscaped(jint) const;
                static jboolean wasEscaped(const ::java::lang::CharSequence &, jint);
              };
            }
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
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace util {
              extern PyType_Def PY_TYPE_DEF(UnescapedCharSequence);
              extern PyTypeObject *PY_TYPE(UnescapedCharSequence);

              class t_UnescapedCharSequence {
              public:
                PyObject_HEAD
                UnescapedCharSequence object;
                static PyObject *wrap_Object(const UnescapedCharSequence&);
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
}

#endif
