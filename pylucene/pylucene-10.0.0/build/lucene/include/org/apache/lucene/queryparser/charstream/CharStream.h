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
              mid_BeginToken_6c956faefc706166,
              mid_Done_3720c61b0679eb3e,
              mid_GetImage_09a7afff1868fc5e,
              mid_GetSuffix_b99eaae8e7f3ab85,
              mid_backup_540b2b23d51b1efd,
              mid_getBeginColumn_20fbf7565993c3d7,
              mid_getBeginLine_20fbf7565993c3d7,
              mid_getEndColumn_20fbf7565993c3d7,
              mid_getEndLine_20fbf7565993c3d7,
              mid_readChar_6c956faefc706166,
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
