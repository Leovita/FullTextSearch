#ifndef org_apache_lucene_search_highlight_Scorer_H
#define org_apache_lucene_search_highlight_Scorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
      namespace search {
        namespace highlight {
          class TextFragment;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class Scorer : public ::java::lang::Object {
           public:
            enum {
              mid_getFragmentScore_8b62236f0e4d0dbc,
              mid_getTokenScore_8b62236f0e4d0dbc,
              mid_init_f3e050e998938273,
              mid_startFragment_f36ca6b77c71a3d9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Scorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Scorer(const Scorer& obj) : ::java::lang::Object(obj) {}

            jfloat getFragmentScore() const;
            jfloat getTokenScore() const;
            ::org::apache::lucene::analysis::TokenStream init(const ::org::apache::lucene::analysis::TokenStream &) const;
            void startFragment(const ::org::apache::lucene::search::highlight::TextFragment &) const;
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
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(Scorer);
          extern PyTypeObject *PY_TYPE(Scorer);

          class t_Scorer {
          public:
            PyObject_HEAD
            Scorer object;
            static PyObject *wrap_Object(const Scorer&);
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
