#ifndef org_apache_lucene_analysis_morph_Token_H
#define org_apache_lucene_analysis_morph_Token_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {
          class TokenType;
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
        namespace morph {

          class Token : public ::java::lang::Object {
           public:
            enum {
              mid_getEndOffset_20fbf7565993c3d7,
              mid_getLength_20fbf7565993c3d7,
              mid_getOffset_20fbf7565993c3d7,
              mid_getPositionIncrement_20fbf7565993c3d7,
              mid_getPositionLength_20fbf7565993c3d7,
              mid_getStartOffset_20fbf7565993c3d7,
              mid_getSurfaceForm_77d52ded526199de,
              mid_getSurfaceFormString_09a7afff1868fc5e,
              mid_getType_466c4854c38ecbb1,
              mid_setPositionIncrement_540b2b23d51b1efd,
              mid_setPositionLength_540b2b23d51b1efd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Token(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Token(const Token& obj) : ::java::lang::Object(obj) {}

            jint getEndOffset() const;
            jint getLength() const;
            jint getOffset() const;
            jint getPositionIncrement() const;
            jint getPositionLength() const;
            jint getStartOffset() const;
            JArray< jchar > getSurfaceForm() const;
            ::java::lang::String getSurfaceFormString() const;
            ::org::apache::lucene::analysis::morph::TokenType getType() const;
            void setPositionIncrement(jint) const;
            void setPositionLength(jint) const;
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
        namespace morph {
          extern PyType_Def PY_TYPE_DEF(Token);
          extern PyTypeObject *PY_TYPE(Token);

          class t_Token {
          public:
            PyObject_HEAD
            Token object;
            static PyObject *wrap_Object(const Token&);
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
