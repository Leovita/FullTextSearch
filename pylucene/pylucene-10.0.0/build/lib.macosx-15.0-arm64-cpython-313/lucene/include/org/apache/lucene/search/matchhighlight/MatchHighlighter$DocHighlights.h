#ifndef org_apache_lucene_search_matchhighlight_MatchHighlighter$DocHighlights_H
#define org_apache_lucene_search_matchhighlight_MatchHighlighter$DocHighlights_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class List;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class MatchHighlighter$DocHighlights : public ::java::lang::Object {
           public:
            enum {
              mid_init$_540b2b23d51b1efd,
              max_mid
            };

            enum {
              fid_docId,
              fid_fields,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MatchHighlighter$DocHighlights(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MatchHighlighter$DocHighlights(const MatchHighlighter$DocHighlights& obj) : ::java::lang::Object(obj) {}

            jint _get_docId() const;
            ::java::util::Map _get_fields() const;

            MatchHighlighter$DocHighlights(jint);
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
        namespace matchhighlight {
          extern PyType_Def PY_TYPE_DEF(MatchHighlighter$DocHighlights);
          extern PyTypeObject *PY_TYPE(MatchHighlighter$DocHighlights);

          class t_MatchHighlighter$DocHighlights {
          public:
            PyObject_HEAD
            MatchHighlighter$DocHighlights object;
            static PyObject *wrap_Object(const MatchHighlighter$DocHighlights&);
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
