#ifndef org_apache_lucene_search_highlight_TextFragment_H
#define org_apache_lucene_search_highlight_TextFragment_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class CharSequence;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class TextFragment;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class TextFragment : public ::java::lang::Object {
           public:
            enum {
              mid_init$_1e5b55d602c23ab6,
              mid_follows_52c60607d6750e74,
              mid_getFragNum_bd89ce15dad49192,
              mid_getScore_8b62236f0e4d0dbc,
              mid_merge_f36ca6b77c71a3d9,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TextFragment(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TextFragment(const TextFragment& obj) : ::java::lang::Object(obj) {}

            TextFragment(const ::java::lang::CharSequence &, jint, jint);

            jboolean follows(const TextFragment &) const;
            jint getFragNum() const;
            jfloat getScore() const;
            void merge(const TextFragment &) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(TextFragment);
          extern PyTypeObject *PY_TYPE(TextFragment);

          class t_TextFragment {
          public:
            PyObject_HEAD
            TextFragment object;
            static PyObject *wrap_Object(const TextFragment&);
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
