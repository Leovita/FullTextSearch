#ifndef org_apache_pylucene_search_highlight_PythonFragmenter_H
#define org_apache_pylucene_search_highlight_PythonFragmenter_H

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
        class TokenStream;
      }
      namespace search {
        namespace highlight {
          class Fragmenter;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace highlight {

          class PythonFragmenter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_isNewFragment_947277eca0748c4e,
              mid_pythonExtension_16939d9d0a9a9721,
              mid_pythonExtension_8b3d46852b435a94,
              mid_start_5300007aee41849a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonFragmenter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonFragmenter(const PythonFragmenter& obj) : ::java::lang::Object(obj) {}

            PythonFragmenter();

            jboolean isNewFragment() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            void start(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(PythonFragmenter);
          extern PyTypeObject *PY_TYPE(PythonFragmenter);

          class t_PythonFragmenter {
          public:
            PyObject_HEAD
            PythonFragmenter object;
            static PyObject *wrap_Object(const PythonFragmenter&);
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
