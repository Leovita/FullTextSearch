#ifndef org_apache_lucene_analysis_ja_JapaneseNumberFilter$NumberBuffer_H
#define org_apache_lucene_analysis_ja_JapaneseNumberFilter$NumberBuffer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          class JapaneseNumberFilter$NumberBuffer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0d82408c6e55bc30,
              mid_advance_3720c61b0679eb3e,
              mid_charAt_92a13ce4196a7e69,
              mid_length_20fbf7565993c3d7,
              mid_position_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseNumberFilter$NumberBuffer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseNumberFilter$NumberBuffer(const JapaneseNumberFilter$NumberBuffer& obj) : ::java::lang::Object(obj) {}

            JapaneseNumberFilter$NumberBuffer(const ::java::lang::String &);

            void advance() const;
            jchar charAt(jint) const;
            jint length() const;
            jint position() const;
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseNumberFilter$NumberBuffer);
          extern PyTypeObject *PY_TYPE(JapaneseNumberFilter$NumberBuffer);

          class t_JapaneseNumberFilter$NumberBuffer {
          public:
            PyObject_HEAD
            JapaneseNumberFilter$NumberBuffer object;
            static PyObject *wrap_Object(const JapaneseNumberFilter$NumberBuffer&);
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
