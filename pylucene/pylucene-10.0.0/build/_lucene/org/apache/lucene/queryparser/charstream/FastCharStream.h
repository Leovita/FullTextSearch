#ifndef org_apache_lucene_queryparser_charstream_FastCharStream_H
#define org_apache_lucene_queryparser_charstream_FastCharStream_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Reader;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace charstream {
          class CharStream;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace charstream {

          class FastCharStream : public ::java::lang::Object {
           public:
            enum {
              mid_init$_89ab2bee9aa84b00,
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

            explicit FastCharStream(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FastCharStream(const FastCharStream& obj) : ::java::lang::Object(obj) {}

            FastCharStream(const ::java::io::Reader &);

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
          extern PyType_Def PY_TYPE_DEF(FastCharStream);
          extern PyTypeObject *PY_TYPE(FastCharStream);

          class t_FastCharStream {
          public:
            PyObject_HEAD
            FastCharStream object;
            static PyObject *wrap_Object(const FastCharStream&);
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
