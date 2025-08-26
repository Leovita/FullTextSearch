#ifndef org_apache_pylucene_search_highlight_PythonFragmenter_H
#define org_apache_pylucene_search_highlight_PythonFragmenter_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class String;
    class Class;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_isNewFragment_9aa4f33e82ea333f,
              mid_pythonExtension_0f176418e3e16541,
              mid_pythonExtension_1d3149fac12f2af3,
              mid_start_695328e8af0f010c,
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
