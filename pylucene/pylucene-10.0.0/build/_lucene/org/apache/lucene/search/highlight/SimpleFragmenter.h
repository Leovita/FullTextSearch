#ifndef org_apache_lucene_search_highlight_SimpleFragmenter_H
#define org_apache_lucene_search_highlight_SimpleFragmenter_H

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
    namespace lucene {
      namespace search {
        namespace highlight {

          class SimpleFragmenter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_getFragmentSize_20fbf7565993c3d7,
              mid_isNewFragment_947277eca0748c4e,
              mid_setFragmentSize_540b2b23d51b1efd,
              mid_start_5300007aee41849a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleFragmenter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleFragmenter(const SimpleFragmenter& obj) : ::java::lang::Object(obj) {}

            SimpleFragmenter();
            SimpleFragmenter(jint);

            jint getFragmentSize() const;
            jboolean isNewFragment() const;
            void setFragmentSize(jint) const;
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
    namespace lucene {
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(SimpleFragmenter);
          extern PyTypeObject *PY_TYPE(SimpleFragmenter);

          class t_SimpleFragmenter {
          public:
            PyObject_HEAD
            SimpleFragmenter object;
            static PyObject *wrap_Object(const SimpleFragmenter&);
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
