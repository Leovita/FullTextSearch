#ifndef org_apache_pylucene_store_PythonIndexInput_H
#define org_apache_pylucene_store_PythonIndexInput_H

#include "org/apache/lucene/store/BufferedIndexInput.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {
        class PythonIndexInput;
      }
    }
    namespace lucene {
      namespace store {
        class IOContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {

        class PythonIndexInput : public ::org::apache::lucene::store::BufferedIndexInput {
         public:
          enum {
            mid_init$_0d82408c6e55bc30,
            mid_init$_e41903e0c61b1b8d,
            mid_init$_a5140b013bba694a,
            mid_clone_2f76af282c33a944,
            mid_close_3720c61b0679eb3e,
            mid_length_16939d9d0a9a9721,
            mid_pythonExtension_16939d9d0a9a9721,
            mid_pythonExtension_8b3d46852b435a94,
            mid_readInternal_e122a5d980794eb4,
            mid_seekInternal_8b3d46852b435a94,
            mid_readInternal_2edbab4eb1690b47,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIndexInput(jobject obj) : ::org::apache::lucene::store::BufferedIndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonIndexInput(const PythonIndexInput& obj) : ::org::apache::lucene::store::BufferedIndexInput(obj) {}

          PythonIndexInput(const ::java::lang::String &);
          PythonIndexInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
          PythonIndexInput(const ::java::lang::String &, jint);

          PythonIndexInput clone() const;
          void close() const;
          jlong length() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          JArray< jbyte > readInternal(jint, jlong) const;
          void seekInternal(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(PythonIndexInput);
        extern PyTypeObject *PY_TYPE(PythonIndexInput);

        class t_PythonIndexInput {
        public:
          PyObject_HEAD
          PythonIndexInput object;
          static PyObject *wrap_Object(const PythonIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
