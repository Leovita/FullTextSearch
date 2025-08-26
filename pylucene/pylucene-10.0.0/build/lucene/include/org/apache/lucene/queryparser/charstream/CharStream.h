#ifndef org_apache_lucene_queryparser_charstream_CharStream_H
#define org_apache_lucene_queryparser_charstream_CharStream_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace charstream {

          class CharStream : public ::java::lang::Object {
           public:
            enum {
              mid_BeginToken_15a06771db8cb866,
              mid_Done_e7bdbe105ce1bafb,
              mid_GetImage_e7df854526d67fa3,
              mid_GetSuffix_25bf44068950f64b,
              mid_backup_8226bd0b0fc13dba,
              mid_getBeginColumn_bd89ce15dad49192,
              mid_getBeginLine_bd89ce15dad49192,
              mid_getEndColumn_bd89ce15dad49192,
              mid_getEndLine_bd89ce15dad49192,
              mid_readChar_15a06771db8cb866,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharStream(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharStream(const CharStream& obj) : ::java::lang::Object(obj) {}

            jchar BeginToken() const;
            void Done() const;
            ::java::lang::String GetImage() const;
            JArray< jchar > GetSuffix(jint) const;
            void backup(jint) const;
            jint getBeginColumn() const;
            jint getBeginLine() const;
            jint getEndColumn() const;
            jint getEndLine() const;
            jchar readChar() const;
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
      namespace queryparser {
        namespace charstream {
          extern PyType_Def PY_TYPE_DEF(CharStream);
          extern PyTypeObject *PY_TYPE(CharStream);

          class t_CharStream {
          public:
            PyObject_HEAD
            CharStream object;
            static PyObject *wrap_Object(const CharStream&);
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
