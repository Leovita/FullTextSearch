#ifndef org_apache_lucene_search_highlight_GradientFormatter_H
#define org_apache_lucene_search_highlight_GradientFormatter_H

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
      namespace search {
        namespace highlight {
          class TokenGroup;
          class Formatter;
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

          class GradientFormatter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6173026fa3621f50,
              mid_hexToInt_3f230d713d7fd2b0,
              mid_highlightTerm_ecd5d50f5d7e1e84,
              mid_getForegroundColorString_e06c794ac7bb9991,
              mid_getBackgroundColorString_e06c794ac7bb9991,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GradientFormatter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GradientFormatter(const GradientFormatter& obj) : ::java::lang::Object(obj) {}

            GradientFormatter(jfloat, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

            static jint hexToInt(const ::java::lang::String &);
            ::java::lang::String highlightTerm(const ::java::lang::String &, const ::org::apache::lucene::search::highlight::TokenGroup &) const;
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
          extern PyType_Def PY_TYPE_DEF(GradientFormatter);
          extern PyTypeObject *PY_TYPE(GradientFormatter);

          class t_GradientFormatter {
          public:
            PyObject_HEAD
            GradientFormatter object;
            static PyObject *wrap_Object(const GradientFormatter&);
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
