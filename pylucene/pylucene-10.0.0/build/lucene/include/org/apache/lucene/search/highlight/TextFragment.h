#ifndef org_apache_lucene_search_highlight_TextFragment_H
#define org_apache_lucene_search_highlight_TextFragment_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class String;
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
              mid_init$_17dee08b301eed95,
              mid_follows_f24ae3dbbf6a51c8,
              mid_getFragNum_20fbf7565993c3d7,
              mid_getScore_9b6c3480dac00edf,
              mid_merge_bc0317ca0a60e657,
              mid_toString_09a7afff1868fc5e,
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
