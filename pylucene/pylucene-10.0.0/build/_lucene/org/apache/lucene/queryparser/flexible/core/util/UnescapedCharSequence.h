#ifndef org_apache_lucene_queryparser_flexible_core_util_UnescapedCharSequence_H
#define org_apache_lucene_queryparser_flexible_core_util_UnescapedCharSequence_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class CharSequence;
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
                  mid_init$_fe2ab7d27aa3fe1a,
                  mid_init$_9fc844307c305638,
                  mid_charAt_bc94dd98365f92fb,
                  mid_length_bd89ce15dad49192,
                  mid_subSequence_e78c175a32c9e667,
                  mid_toLowerCase_58d5a9003f0496da,
                  mid_toString_e7df854526d67fa3,
                  mid_toStringEscaped_e7df854526d67fa3,
                  mid_toStringEscaped_73a8d57a48f9dd63,
                  mid_wasEscaped_a8281eb3b9d9672d,
                  mid_wasEscaped_cea37bd25a41f732,
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
