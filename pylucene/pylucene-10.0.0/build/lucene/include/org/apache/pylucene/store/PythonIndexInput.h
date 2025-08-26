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
    namespace lucene {
      namespace store {
        class IOContext;
      }
    }
    namespace pylucene {
      namespace store {
        class PythonIndexInput;
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
            mid_init$_ee46a189998009d6,
            mid_init$_1aa676c7c47306c5,
            mid_init$_49e27e98009acf15,
            mid_clone_e7e934f8b638fd5e,
            mid_close_e7bdbe105ce1bafb,
            mid_length_0f176418e3e16541,
            mid_pythonExtension_0f176418e3e16541,
            mid_pythonExtension_1d3149fac12f2af3,
            mid_readInternal_42543874f68841be,
            mid_seekInternal_1d3149fac12f2af3,
            mid_readInternal_bbc658db99820977,
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
