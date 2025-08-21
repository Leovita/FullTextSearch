#ifndef org_apache_lucene_queryparser_xml_ParserException_H
#define org_apache_lucene_queryparser_xml_ParserException_H

#include "java/lang/Exception.h"

namespace java {
  namespace lang {
    class String;
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {

          class ParserException : public ::java::lang::Exception {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_0d82408c6e55bc30,
              mid_init$_4b71a6d99b73f7d1,
              mid_init$_ea9871c48698171a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParserException(jobject obj) : ::java::lang::Exception(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ParserException(const ParserException& obj) : ::java::lang::Exception(obj) {}

            ParserException();
            ParserException(const ::java::lang::String &);
            ParserException(const ::java::lang::Throwable &);
            ParserException(const ::java::lang::String &, const ::java::lang::Throwable &);
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
        namespace xml {
          extern PyType_Def PY_TYPE_DEF(ParserException);
          extern PyTypeObject *PY_TYPE(ParserException);

          class t_ParserException {
          public:
            PyObject_HEAD
            ParserException object;
            static PyObject *wrap_Object(const ParserException&);
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
